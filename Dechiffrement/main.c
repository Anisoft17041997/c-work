//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    void dechiffrement(void);
//    void chiffrement(void);
//    //char message[]="";
//    //int i=0;
//    //chiffrement();
//    dechiffrement();
//    return 0;
//}
//
//
//void chiffrement(void)
//{
//    char message[] = "IN WAR, EVENTS OF IMPORTANCE ARE THE RESULT OF TRIVIAL CAUSES";
//        int indexTab;
//        int cle =5;
//
//        for(indexTab = 0; message[indexTab] != '\0'; indexTab++)
//        {
//                if(message[indexTab] >= 'A' && message[indexTab] <= 'Z')
//                {
//                        /* message[indexTab] = ((message[indexTab] - 'A') + cle) % 26 + 'A'; */
//                        message[indexTab] -= 'A';
//                        message[indexTab] += cle;
//                        message[indexTab] %= 26;
//                        message[indexTab] += 'A';
//                }
//                else if(message[indexTab] >= 'a' && message[indexTab] <= 'z')
//                {
//                        /* message[indexTab] = ((message[indexTab] - 'a') + cle) % 26 + 'a'; */
//                        message[indexTab] -= 'a';
//                        message[indexTab] += cle;
//                        message[indexTab] %= 26;
//                        message[indexTab] += 'a';
//                }
//
//      printf("%c",message[indexTab]);
//        }
//
//}
//
//void dechiffrement(void)
//{
//        char message[] = "N BTZQI WFYMJW GJ KNWXY NS F QNYYQJ NGJWNFS ANQQFLJ YMFS XJHTSI NS WTRJ ";
//        int indexTab;
//        int cle=5 ;
//
//        for(indexTab = 0; message[indexTab] != '\0'; indexTab++)
//        {
//                if(message[indexTab] >= 'A' && message[indexTab] <= 'Z')
//                {
//                        message[indexTab] -= 'A';
//                        message[indexTab] -= cle;
//
//                        while(message[indexTab] < 0)
//                                message[indexTab] += 26;
//
//                        message[indexTab] %= 26;
//                        message[indexTab] += 'A';
//                }
//                else if(message[indexTab] >= 'a' && message[indexTab] <= 'z')
//                {
//                        message[indexTab] -= 'a';
//                        message[indexTab] -= cle;
//
//                        while(message[indexTab] < 0)
//                                message[indexTab] += 26;
//
//                        message[indexTab] %= 26;
//                        message[indexTab] += 'a';
//                }
//                printf("%c",message[indexTab]);
//                system("");
//        }
//
//}
