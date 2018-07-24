#include <iostream>
using namespace std;

int answer;

int main()
{

statement_a:
    
    cout << "Gözlerini karanlık bir ormanda açtın.. Etraf karlı ve soğuk." << endl;
    cout << "Ne kadardır burda olduğun ya da buraya nasıl geldiğinle ilgili en ufak bir şey dahi hatırlamıyorsun." << endl;
    cout << "Nedense her yerin ağrıyor ve miden adeta sırtına yapışmış durumda. Etraf çok karanlık olsa da" << endl;
    cout << "Dolunay bizim tarafımızda.. Etrafı mavi bir ışıkla aydınlatıyor. En azından burnunun dibini görebiliyorsun." << endl;
    cout << "biraz kendine gelince etrafa bakınıp ilerde kamp ateşine benzer bir şey görüyorsun. Burnuna hafif bir kızarmış et kokusu da geliyor\n" << endl;  // 1

    cout << "1 - Işığa doğru git" << endl;                                                      // a1
    cout << "2 - Içinde kötü bir his var.. oraya kendini göstermeden sessizce yaklaş" << endl;  // a2
    cout << "3 - Etrafına bakın başka bir şeyler var mı?" << endl;                              // a3
    cout << "4 - Üstüne başına bir bak işe yarar bir şeyler var mı?" << endl;                   // a4
    cout << "5 - Işığı falan boşver.. bu ormandan çıkmak için ayağa kalk ve işe koyul" << endl; // a5

    cin >> answer;

    switch (answer)
    {
        case(1): goto statement_a1;
        case(2): goto statement_a2;
        case(3): goto statement_a3;
        case(4): goto statement_a4;
        case(5): goto statement_a5;
        default: goto statement_a;
    }

statement_a1:

    cout << "Ayağa kalktın ve uzaktaki ışığa doğru yürümeye başladın.. Ağaçları geçtikçe ışık etrafı daha iyi görmeni sağladı." << endl;
    cout << "Daha da yaklaştığın zaman ateşin etrafında kimsenin olmadığını gördün." << endl;
    cout << "Ateşin üstünde kızaran ve bir kısmı yenmiş bir geyik ve 2-3 çuvala benzer bir şeyler gördün\n" << endl;

    cout << "1 - Geyik muhteşem görünüyor.. Bir parça almak için kendini tutamıyorsun" << endl; //ab1
    cout << "2 - Etrafa biraz daha bak belki de silah ya da ona benzer yararlı bir şeyler bulabilirsin" << endl; //ab2
    cout << "3 - İçine kötü bir his doğdu. Buradan uzaklaşmaya karar verdin" << endl; //ab3

    cin >> answer;

    switch (answer)
    {
        case(1): goto statement_a1;
        case(2): goto statement_a2;
        case(3): goto statement_a3;
        default: goto statement_a;
    }

statement_a2:

    cout << "Sessizce ayağa kalktın ve etrafına baka baka ışığın geldiği yöne doğru, etrafından dolaşa dolaya yaklaşmaya başladın" << endl;
    cout << "En son Bir ağacın arkasından ateşin olduğu yöne baktın fakat ateşin üstünde pişen bir hayvan ve etrafında bir kaç cuval olduğunu gördün" << endl;
    cout << "Kimsecikler de yoktu ayrıca....\n" << endl;

    cout << "1 - Ateş yanıyorsa muhakkak bu ateşi yakanlar bu buralarda olmalı. Burada beklemeye karar verdin ama ateşin üstünden gelen lezzetli koku..." << endl;
    cout << "2 - Burada kaç kişi kamp yaptıysa, buraya kesin geri dönerler.. Şu an çok savunmasızım oraya hiç bulaşmasan iyi olur diye düşünüyorsun" << endl;
    cout << "3 - Hazır kimse yokken şuraya bir göz atmaya karar verdin" << endl;

    cin >> answer;

    switch (answer)
    {
        case(1): goto statement_a1;
        case(2): goto statement_a2;
        case(3): goto statement_a3;
        default: goto statement_a;
    }

statement_a3:

    cout << "Etrafa baktığında çok uzakta insan silüyetleri görüyorsun ancak tam emin değilsin." << endl;
    cout << "İnsan, hayvan ya da rüzgarla sallanan ağaçlar bile olabilirler.." << endl;
    cout << "Olayları tam olarak idrak edememek seni psikolojik olarak kötü etkilemeye başlıyor.. \n" << endl;

    cout << "1 - O ağaçlar arasında ne sikim var belli değil.. Buradan kurtulmam için bir şeyler yapmam gerek.." << endl; 
    cout << "2 - Gidip orada ne olup bittiğini öğreneceğim.. Belki de bana yardım edecek birlerini bulurum." << endl;
    cout << "3 - Onlar sadece ağaç.. Değilse de tehlikeli olabilir. Şu ateşin oraya bir gidip bakacağım." << endl;

    cin >> answer;

    switch (answer)
    {
        case(1): goto statement_a1;
        case(2): goto statement_a2;
        case(3): goto statement_a3;
        default: goto statement_a;
    }

statement_a4:
    cout << "Üstünde seni soğuktan koruyan bir kalın pelerine benzer bir şey, cebinde 10 dinar ve bir eski ve paslı bir çakı var." << endl;
    cout << "Başka bir şey de yok.. Ben burda ne yapıyorum? nasıl geldim buraya?\n" << endl;

    cout << "1 - Işığa doğru git" << endl;                                                      // a1
    cout << "2 - Içinde kötü bir his var.. oraya kendini göstermeden sessizce yaklaş" << endl;  // a2
    cout << "3 - Etrafına bakın başka bir şeyler var mı?" << endl;                              // a3
    cout << "5 - Işığı falan boşver.. bu ormandan çıkmak için ayağa kalk ve işe koyul" << endl; // a5

    cin >> answer;

    switch (answer)
    {
        case(1): goto statement_a1;
        case(2): goto statement_a2;
        case(3): goto statement_a3;
        case(4): goto statement_a4;
        default: goto statement_a;
    }
statement_a5:
    cout << "Ayağa kalktıp yan yarafta üzeri kar ile örtülmüş patika olduğuna inandığın yoldan ilerlemeye başlıyorsun." << endl;
    cout << "Yürürken ara ara kurtların seslerini ve ağaçların arasında çıtırtılar duyuyorsun." << endl;
    cout << "2 saat karlı ve engebeli yolda yürüdükten sonra bir taşa oturuyorsun" << endl;
    cout << "Yorgunsun ve karnın da bir o kadar aç.. yürümeye devam edip etmemek konusunda emin değilsin \n" << endl;

    cout << "1 - Bu geceyi burada geçirsem iyi olacak.. Yoksa cidden yorgunluktan düşüp bayılacağım.." << endl;
    cout << "2 - Hayır yürümeye devam etmeliyim. Burası tehlikeli bir yer buradan çıkmam şart..." << endl;

    cin >> answer;

    switch (answer)
    {
        case(1): goto statement_a1;
        case(2): goto statement_a2;
        default: goto statement_a;
    }













    return 0;
}
