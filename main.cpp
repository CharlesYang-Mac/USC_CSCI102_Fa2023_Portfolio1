//=============================================================================
// Name: Qizhe (Charles) Yang
// E-mail: yangchar@usc.edu
// Description: provide a 1-2 sentence description of your program
/*
 * I would like to describe the project as a simplified "akinator" game as it is rather linear and is limited to only very little characters.
 * In the future, I think it is possible to expand the whole project as a template.
 * Information about characters refers to the animation, publications, and zh.moegirl.org.cn.
 */
// ------------------------ Test case Inputs ----------------------------------
//  This program asks you to think of a character in this series of animation
//  I will simply put the character thought in Test 1 output rather than the whole sentence because it would be too long
//  So the "Test X output" would only be a name, but the real program output is a sentence that introduces the name
//  In the testing, I would use my favorite character in each team as test outputs
//  Comma is to separate the answers to the next question
//  For example, 5, 2020, China: 5 is to answer the first question, 2020 is the second, China is the third, and so on
//
//  Test 1 input:
//   5, 2020, China
//  Test 1 output:
//   Keke Tang
//
//  Test 2 input:
//   2, 3, 2
//  Test 2 output:
//   Chika Takami
//
//  Test 3 input:
//   1, 2, orange
//  Test 3 output:
//   Honoka Kousaka
//
//  Test 4 input:
//   3, y, 2017, 3, 1
//  Test 4 output:
//   Setsuna Yuki (Nana Nakawa)
//
//  Test 5 input:
//   5, 5
//  Test 5 output:
//   Kaho Hinoshita
//
//  Inputs that do not follow the guide will result in error message at any question
//  Test 6 input:
//   6
//  Test 6 output:
//   "Error occured ..."
//  Because there is no team 6
//
//=============================================================================

// ------------ Add #includes and other statements here ----------
#include <iostream>
using namespace std;
// ------------ Add your main() function below ----------
int main() {
    cout << "CSCI102 Portfolio 1 - If Statements" << endl;
    cout << "This project is to guess the LoveLive! series character you are thinking of." << endl;
    cout << "For more information about LoveLive! series characters, go to lovelive-anime.jp." << endl; // For you to test this project
    cout << "All the character's name is printed in FIRST then FAMILY name. " << endl << " " << endl;
    int team, birth_month, grade, group, year, song, job;
    string supporting_color, hair_color;
    string output = "The character you are thinking of is ", wrong_info = "Error occurred. No such character exists or wrong input."; // templates
    cout << "Which team is the character in? 1) μ's, 2) Aqours, 3) Nijigasaki School Idol Club, 4) Liella!!, 5) Hosu no Sora Jogakuin School Idol Club." << endl;
    cin >> team;

    // for μ's
    if (team == 1) {
        cout << "Which grade is the character in?" << endl;
        cin >> grade;
        if (grade == 1) {
            char height;
            cout << "Is the character tall? y/n" << endl;
            cin >> height;
            if (height == 'y') {
                cout << output << "Maki Nishikino" << endl;
            }
            else {
                cout << "In which month is the character born? (numbers please)" << endl;
                cin >> birth_month;
                if (birth_month == 1) {
                    cout << output << "Hanayo Koizumi" << endl;
                }
                else if (birth_month == 11) {
                    cout << output << "Rin Hoshizora" << endl;
                }
                else {
                    cout << wrong_info;
                }
            }
        }
        else if (grade == 2) {
            cout << "Is the supporting color orange, blue or grey?" << endl;
            cin >> supporting_color;
            if (supporting_color == "orange") {
                cout << output << "Honoka Kousaka" << endl;
            }
            else if (supporting_color == "blue") {
                cout << output << "Umi Sonoda" << endl;
            }
            else if (supporting_color == "grey") {
                cout << output << "Kotori Minami" << endl;
            }
            else {
                cout << wrong_info;
            }
        }
        else if (grade == 3) {
            char student_council;
            cout << "Has the character worked in student council at any time? y/n" << endl;
            cin >> student_council;
            if (student_council == 'n') {
                cout << output << "Niko Yazawa" << endl;
            }
            else {
                cout << "In which month is the character born? (numbers please)" << endl;
                cin >> birth_month;
                if (birth_month == 10) {
                    cout << output << "Eri Ayase" << endl;
                }
                else if (birth_month == 6) {
                    cout << output << "Nozomi Toujou" << endl;
                }
                else {
                    cout << wrong_info;
                }
            }
        }
    }

        // for Aqours
    else if (team == 2) {
        cout << "Which small group does the character belong to? 1) Guilty Kiss, 2) AZALEA, 3) CYaRon!" << endl; // There's Guilty Kiss, AZALEA, CYaRon!
        cin >> group;
        if (group == 1) {
            cout << "Which grade is the character in?" << endl;
            cin >> grade;
            if (grade == 1) {
                cout << output << "Yoshiko (Yohane) Tsushima" << endl;
            }
            else if (grade == 2) {
                cout << output << "Riko Sakurauchi" << endl;
            }
            else if (grade == 3) {
                cout << output << "Mari Ohara" << endl;
            }
            else {
                cout << wrong_info;
            }
        }
        else if (group == 2) {
            cout << "Is the supporting color yellow, green or red?" << endl;
            cin >> supporting_color;
            if (supporting_color == "yellow") {
                cout << output << "Haramaru Kinikida" << endl;
            }
            else if (supporting_color == "green") {
                cout << output << "Kanan Matsuura" << endl;
            }
            else if (supporting_color == "red") {
                cout << output << "Dia Kurosawa" << endl;
            }
            else {
                cout << wrong_info;
            }
        }
        else if (group == 3) {
            int sister;
            cout << "How many sisters do this character have?" << endl;
            cin >> sister;
            if (sister == 1) {
                cout << "Which grade is this character?" << endl;
                cin >> grade;
                if (grade == 1) {
                    cout << output << "Ruby Kurosawa" << endl;
                }
                else if (grade == 2) {
                    cout << output << "You Watanabe" << endl;
                }
                else {
                    cout << wrong_info;
                }
            }
            else if (sister == 2) {
                cout << output << "Chika Takami" << endl;
            }
            else {
                cout << wrong_info;
            }
        }
    }

        // for NJGK
    else if (team == 3) {
        char sing_or_not;
        cout << "Has the character ever sing? y/n" << endl;
        cin >> sing_or_not;
        if (sing_or_not == 'n') {
            cout << output << "Yuu Takasaki";
        }
        else if (sing_or_not == 'y') {
            cout << "Which year did the character joined in this team? 2017, 2020 or 2021" << endl;
            cin >> year;
            if (year == 2020) {
                cout << output << "Shioriko Mifune" << endl;
            }
            else if (year == 2021) {
                cout << "Which song belongs to your character? 1) stars we chase, 2) Utopia" << endl;
                cin >> song;
                if (song == 1) {
                    cout << output << "Mia Taylor" << endl;
                }
                else if (song == 2) {
                    cout << output << "Lanzhu Zhong" << endl;
                }
                else {
                    cout << wrong_info;
                }
            }
            else if (year == 2017) {
                cout << "Which small group does the character belong to? 1) DiverDiva, 2) QU4RTZ, 3) A·ZU·NA" << endl;
                cin >> group;
                if (group == 1) {
                    cout << "Is the supporting color orange or deep_blue?" << endl;
                    cin >> supporting_color;
                    if (supporting_color == "orange") {
                        cout << output << "Ai Miyashita" << endl;
                    }
                    else if (supporting_color == "deep_blue") {
                        cout << output << "Karin Asaka" << endl;
                    }
                    else {
                        cout << wrong_info;
                    }
                }
                else if (group == 2) {
                    cout << "In which month is the character born? (numbers please)" << endl;
                    cin >> birth_month;
                    if (birth_month == 1) {
                        cout << output << "Kasumi Nakasu" << endl;
                    }
                    else if (birth_month == 2) {
                        cout << output << "Emma Verde" << endl;
                    }
                    else if (birth_month == 11) {
                        cout << output << "Rina Tennouji" << endl;
                    }
                    else if (birth_month == 12) {
                        cout << output << "kanata Konoe" << endl;
                    }
                    else {
                        cout << wrong_info;
                    }
                }
                else if (group == 3) {
                    cout << "What is the job of the character? 1) Seito Kaicho (Student chairman), 2) Actress, 3) Other" << endl;
                    cin >> job;
                    if (job == 1) {
                        cout << output << "Setsuna Yuki (Nana Nakawa)" << endl;
                    }
                    else if (job == 2) {
                        cout << output << "Shizuku Ousaka" << endl;
                    }
                    else if (job == 3) {
                        cout << output << "Ayumu Uehara" << endl;
                    }
                    else {
                        cout << wrong_info;
                    }
                }
            }
        }
        else {
            cout << wrong_info;
        }
    }

        // for Liella!
    else if (team == 4) {
        cout << "Which year did the character joined in this team? 2020, 2021 or 2022" << endl;
        cin >> year;
        if (year == 2020) {
            string nationality;
            cout << "Where does the character came from?" << endl;
            cin >> nationality;
            if (nationality == "China") {
                cout << output << "Keke Tang" << endl;
            }
            else if (nationality == "Japan") {
                string department;
                cout << "Which department does the character belong to? Normal or Music?" << endl;
                cin >> department;
                if (department == "Normal") {
                    cout << "What is the hair color? orange or blonde" << endl;
                    cin >> hair_color;
                    if (hair_color == "orange") {
                        cout << output << "Kanon Shibuya" << endl;
                    }
                    else if (hair_color == "blonde") {
                        cout << output << "Sumire Heanna" << endl;
                    }
                    else {
                        cout << wrong_info;
                    }
                }
                else if (department == "Music") {
                    cout << "What is the job of the character? 1) Seito Kaicho (Student chairman), 2) Other" << endl;
                    cin >> job;
                    if (job == 1) {
                        cout << output << "Ren Hazuki" << endl;
                    }
                    else if (job == 2) {
                        cout << output << "Chisato Arashi" << endl;
                    }
                    else {
                        cout << wrong_info;
                    }
                }
            }
            else {
                cout << wrong_info << endl << "However, one of them do have international bloodline.";
            }
        }
        else if (year == 2021) {
            cout << "Is the supporting color yellow, red, pale_green or pink?" << endl;
            cin >> supporting_color;
            if (supporting_color == "yellow") {
                cout << output << "Kinako Sakurakoji" << endl;
            }
            else if (supporting_color == "red") {
                cout << output << "Mei Yoneme" << endl;
            }
            else if (supporting_color == "pale_green") {
                cout << output << "Shiki Wakana" << endl;
            }
            else if (supporting_color == "pink") {
                cout << output << "Natsumi Onitsuka" << endl;
            }
            else {
                cout << wrong_info;
            }
        }
        else if (year == 2022) {
            cout << "In which month is the character born? (numbers please)" << endl;
            cin >> birth_month;
            if (birth_month == 1) {
                cout << output << "Wien Margarete" << endl;
            }
            else if (birth_month == 12) {
                cout << output << "Tomari Onitsuka" << endl;
            }
        }
        else {
            cout << wrong_info;
        }
    }

        // for HNS
    else if (team ==5) {
        cout << "In which month is the character born? (numbers please)" << endl;
        cin >> birth_month;
        if (birth_month == 1) {
            cout << output << "Sayaka Murano" << endl;
        }
        else if (birth_month == 5) {
            cout << output << "Kaho Hinoshita" << endl;
        }
        else if (birth_month == 6) {
            cout << output << "Kozue Otomune" << endl;
        }
        else if (birth_month == 8) {
            cout << output << "Rurino Oosawa" << endl;
        }
        else if (birth_month == 11) {
            cout << output << "Tsuzuri Yugiri" << endl;
        }
        else if (birth_month == 12) {
            cout << output << "Megumi Fujishima" << endl;
        }
        else {
            cout << wrong_info;
        }
    }

    else {
        cout << wrong_info;
    }
    return 0;
}