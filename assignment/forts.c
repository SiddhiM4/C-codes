#include<stdio.h>
int main()
{
    int ch;
    char c;

    printf("\nSelect region of Maharashtra to know more about Administrative Divisions\n");
    printf("\n1.Konkan Region\n2.Western Maharashtra or Desh or Pune Region\n3.Marathwada or Aurangabad Region\n4.Vidharbha or Amravati+Nagpur Region\n5.Nashik Region");
    printf("\nWhat would you like to know about?");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1://konkan region
        printf("\n-----------------KONKAN REGION-------------------");
        printf("\nThe Konkan region in Maharashtra, part of the Konkan Division, is known for its scenic coastline along the Arabian Sea, cultural richness, and major districts like Mumbai, Thane, and Raigad, featuring attractions such as beaches, historical forts, and lush green landscapes.");
        printf("\n");
        printf("\nForts in Konkan Region");
        printf("\na.Raigad Fort (Raigad)\nb.Sindhudurg Fort (Sindhudurg)\nc.Murud-Janjira Fort (Raigad)\nd.Vijaydurg Fort (Sindhudurg)\ne.Suvarnadurg Fort (Ratnagiri)\nf.Arnala Fort (Palghar)\ng.Kelve Fort (Palghar)\nh.Mahuli Fort (Thane)\ni.Karnala Fort (Raigad)\nj.Prabalgad Fort (Raigad)");
        printf("\nEnter your choice in given character to know about above forts:");
        printf("\n");
        scanf("%s",&c);

        switch(c)
        {
            case 'a'://raigad fort
            printf("\nRaigad Fort");
            printf("\n\nRaigad Fort, located in the Raigad district of the Konkan Division in Maharashtra, was the capital of the Maratha Empire under Chhatrapati Shivaji Maharaj and is renowned for its historical significance, strategic location atop the Sahyadri mountains, and features such as the royal palace, queen's quarters, and the majestic views from its elevated position.");
            break;
            case 'b'://sindhudurg fort
            printf("\nSindhudurg Fort");
            printf("\n\nSindhudurg Fort, located on an island near Malvan in the Sindhudurg district of Maharashtra's Konkan Division, was built by Chhatrapati Shivaji Maharaj in the 17th century. It is renowned for its strategic coastal defense, robust architecture, and features such as concealed main entrances, a temple dedicated to Shivaji, and stunning views of the Arabian Sea.");
            break;
            case 'c'://murud-janjira fort
            printf("\nMurud - Janjira Fort");
            printf("\n\nMurud-Janjira Fort, located on an island off the coastal village of Murud in the Raigad district of Maharashtra's Konkan Division, is a formidable sea fort built in the 16th century. It is renowned for its invincible architecture, having withstood numerous attacks, and features massive stone walls, 19 bastions, freshwater lakes, and majestic views of the Arabian Sea.");
            break;
            case 'd'://vijaydurg fort
            printf("\nVijaydurg Fort");
            printf("\n\nMurud-Janjira Fort, located on an island off the coastal village of Murud in the Raigad district of Maharashtra's Konkan Division, is a formidable sea fort built in the 16th century. It is renowned for its invincible architecture, having withstood numerous attacks, and features massive stone walls, 19 bastions, freshwater lakes, and majestic views of the Arabian Sea.");
            break;
            case 'e'://suvarnadurg fort
            printf("\nSuvarndurg Fort");
            printf("\n\nSuvarnadurg Fort, located on a small island in the Ratnagiri district, was constructed by Shivaji Maharaj in the 17th century. The fort served as a naval base and is known for its robust architecture and the picturesque views of the Arabian Sea.");
            break;
            case 'f'://arnala fort
            printf("\nArnala Fort");
            printf("\n\nArnala Fort, situated on Arnala Island near Vasai in the Palghar district, is a coastal fort built by the Portuguese in the 16th century and later captured by the Marathas. The fort is known for its bastions and moats.");
            break;
            case 'g'://kelve fort
            printf("\nKelve Fort");
            printf("\n\nKelve Fort, also known as Kelve-Mahim Fort, is located in the Palghar district. Built by the Portuguese and later taken over by the Marathas, the fort features a unique blend of architectural styles and provides panoramic views of the Arabian Sea.");
            break;
            case 'h'://mahuli fort
            printf("\nMahuli Fort");
            printf("\n\nMahuli Fort, situated in the Thane district, is a popular trekking destination and historical site. The fort complex includes several smaller forts and ancient temples, offering a glimpse into the region's rich history.");            break;
            case 'i'://karnala fort
            printf("\nKarnala Fort");
            printf("\n\nKarnala Fort, located in the Raigad district, is a hill fort known for its bird sanctuary and trekking trails. The fort's pinnacle offers a stunning view of the surrounding countryside and the Arabian Sea.");
            break;
            case 'j'://prabalgad fort
            printf("\nPrabalgad Fort");
            printf("\n\nPrabalgad Fort, also in the Raigad district, is situated on a plateau and offers challenging trekking routes. The fort is known for its strategic location and panoramic views of the Western Ghats and the Konkan coast.");
            break;
        }//end of konkan
        break;
        case 2:
        {
            //pune region
            printf("\n--------------------------Western Maharashtra OR Desh OR PUNE Region------------------------");
            printf("\nThe Pune region in Maharashtra, part of the Pune Division, is renowned for its educational institutions, cultural heritage, and historical significance, encompassing major districts like Pune, Satara, and Solapur, with attractions such as Sinhagad Fort, Shaniwar Wada, and the vibrant city of Pune.");
            printf("\n");
            printf("\nForts in Pune Region");
            printf("\na.Sinhagad Fort (Pune)\nb.Rajgad Fort (Pune)\nc.Torna Fort (Pune)\nd.Lohagad Fort (Pune)\ne.Visapur Fort (Pune)\nf.Purandar Fort (Pune)\ng.Shivneri Fort (Pune)\nh.Ratangad Fort (Ahmednagar)\ni.Harishchandragad Fort (Ahmednagar)\nj.Kulang Fort (Nashik)\nk.Kalsubai Fort (Nashik)");
            printf("\nEnter your choice in given character to know about above forts:");
            printf("\n");
            scanf("%s",&c);

            switch(c)
            {
                case 'a'://sinhgad fort
                printf("\nSinhgad Fort");
                printf("\n\nYear of Establishment: 1647\n\nSinhagad Fort, originally known as Kondhana, is famous for its strategic location and the battle fought in 1670 where Maratha warrior Tanaji Malusare sacrificed his life to recapture the fort from the Mughals.");
                break;
                case 'b'://rajgad fort
                printf("\nRajgad Fort");
                printf("\n\nYear of Establishment: 1490s\n\n Rajgad Fort served as the capital of the Maratha Empire for almost 26 years under Chhatrapati Shivaji Maharaj. It is known for its complex structure, including palaces, water cisterns, and caves.");
                break;
                case 'c'://torna
                printf("\nTorna Fort");
                printf("\n\nYear of Establishment: 1646\n\nTorna Fort, also known as Prachandagad, was the first fort captured by Shivaji Maharaj at the age of 16. It played a key role in the establishment of the Maratha Empire.");
                break;
                case 'd'://lohagad
                printf("\nLohagad Fort");
                printf("\n\nYear of Establishment: 1564\n\n Lohagad Fort, meaning Iron Fort, is known for its strong and impressive architecture. It was used by Shivaji Maharaj to store his treasury and has a scenic trekking route.");
                break;
                case 'e'://visapur
                printf("\nVisapur Fort");
                printf("\n\nYear of Establishment: 1713\n\n Visapur Fort, situated close to Lohagad, was built by Balaji Vishwanath, the first Peshwa of the Maratha Empire. The fort offers panoramic views of the surrounding area.");
                break;
                case 'f'://purandar
                printf("\nPurandar Fort");
                printf("\n\nYear of Establishment: 11th Century\n\nPurandar Fort has a rich history dating back to the 11th century. It was an important military base during the Maratha Empire and the birthplace of Chhatrapati Sambhaji Maharaj, Shivaji's son.");
                break;
                case 'g'://shivneri
                printf("\nShivneri Fort");
                printf("\n\nYear of Establishment: 16th Century\n\nShivneri Fort is the birthplace of Chhatrapati Shivaji Maharaj in 1630. The fort has several structures including a temple dedicated to the goddess Shivai, after whom Shivaji was named.");
                break;
                case 'h'://ratangad
                printf("\nRatangad Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\nRatangad Fort is an ancient fort that was captured by Shivaji Maharaj in the 17th century. It offers a breathtaking view of the surrounding Sahyadri ranges and the Bhandardara dam.");
                break;
                case 'i'://harishchandragad
                printf("\nHarishchndragad Fort");
                printf("\n\nYear of Establishment: 6th Century\n\n: Harishchandragad Fort is an ancient fort with historical caves from the 6th century. It is famous for the Konkan Kada (Konkan cliff), which offers stunning views of the surrounding region.");
                break;
                case 'j'://kulang
                printf("\nKulang Fort");
                printf("\n\nKulang Fort is renowned for its height and the challenging trek required to reach its summit. The fort is part of the Kalsubai-Harishchandragad Wildlife Sanctuary and offers stunning views of the surrounding peaks, including Alang and Madan forts, forming the famous AMK (Alang, Madan, Kulang) trio of forts.");
                break;
                case 'k'://kalsubai
                printf("\nKalsubai Fort");
                printf("\n\nYear of Establishment: 1700s\n\nKalsubai Fort, located in the Ahmednagar district of Maharashtra, is renowned for being the highest peak in the state at 5,400 feet (1,646 meters) above sea level. It is a popular trekking destination, offering stunning panoramic views of the surrounding Sahyadri range and featuring the famous Kalsubai temple at its summit");
                break;
            }
        }//end of pune
        break;
        
        case 3:
        {
            //marathawada region
            printf("\n---------------Marathwada Region------------------");
            printf("\nThe Marathwada region in Maharashtra, part of the Aurangabad Division, is known for its rich history and cultural heritage, encompassing major districts like Aurangabad, Beed, and Nanded, with notable attractions such as the Ajanta and Ellora Caves, Bibi Ka Maqbara, and Daulatabad Fort.");
            printf("\n");
            printf("\nForts in Marathwada Region");
            printf("\na.Daulatabad Fort (Aurangabad/Chhatrapati Sambhajinagar)\nb.Aurangabad Fort (Aurangabad/Chhatrapati Sambhajinagar)\nc.Narnala Fort (Akola)\nd.Antur Fort (Jalna)\ne.Kandhar Fort (Nanded)\nf.Paranda Fort (Osmanabad)\ng.Udgir Fort (Latur)\nh.Ausa Fort (Latur)\ni.Janjala Fort (Parbhani)");
            printf("\nEnter your choice in given character to know about above forts:");
            printf("\n");
            scanf("%s",&c);

            switch(c)
            {
                case 'a'://daulatabad
                printf("\nDaulatabad Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown\n\n Daulatabad Fort, also known as Devgiri Fort, is an ancient fortification dating back to the Yadava dynasty. It was later captured by several rulers including Muhammad bin Tughlaq and Aurangzeb. The fort is known for its intricate defense system and the famous Chand Minar.)");
                break;
                case 'b'://aurangabad
                printf("\nAurangabad Fort");
                printf("\n\nYear of Establishment: 17th Century\n\nAurangabad Fort, renamed as Chhatrapati Sambhajinagar Fort, was built by Malik Ambar, the prime minister of the Nizam Shahi rulers of Ahmadnagar, in the early 17th century. It is known for its strong defenses and historical significance.");
                break;
                case 'c'://narnala
                printf("\nNarnala Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown, likely dates back to medieval times)\n\n Narnala Fort is strategically situated on a hilltop, offering panoramic views of the surrounding landscape. It consists of three forts: Zafarabad on the east, Teliagarh to the west, and Narnala itself. The fort has historical significance dating back to the Mughal and Maratha periods, playing a crucial role in regional politics and warfare. It features robust fortifications, gateways, water reservoirs, and remnants of palaces and temples, reflecting its military and administrative importance.");
                break;
                case 'd'://antur
                printf("\nAntur Fort");
                printf("\n\n Ancient (exact year unknown)\n\nAntur Fort is an ancient fortification that has historical significance dating back to medieval times. It is located on a hilltop and offers panoramic views of the surrounding landscape. The fort's strategic location made it a crucial stronghold during various periods of regional conflicts. Antur Fort features remnants of fortifications, bastions, gateways, and water reservoirs, showcasing its military and defensive architecture.");
                break;
                case 'e'://kandhar
                printf("\nKandhar Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown, believed to date back to medieval times)\n\nKandhar Fort is situated atop a hill and is known for its strategic location overlooking the surrounding region. The fort has witnessed various rulers and periods of regional conflicts, contributing to its historical importance. It features sturdy fortifications, bastions, gates, and remnants of palaces and temples, reflecting its military and administrative significance during different eras.");
                break;
                case 'f'://paranda
                printf("\nParanda Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\nParanda Fort is an ancient fort located in the Osmanabad district. It has historical significance and offers scenic views of the surrounding region.");
                break;
                case 'g'://udgir
                printf("\nUdgir Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\nUdgir Fort is an ancient fortification located in the Latur district. It has historical importance and is known for its architecture and strategic location.");
                break;
                case 'h'://ausa
                printf("\nAusa Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\nAusa Fort is another ancient fort in the Latur district, known for its historical significance and architectural remains.");
                break;
                case 'i'://janjala
                printf("\nJanjala Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown, believed to date back to medieval times)\n\nJanjala Fort is situated atop a hill and is known for its strategic location and robust fortifications. It played a significant role in regional politics and warfare during various historical periods. The fort features sturdy walls, bastions, gateways, and remnants of structures like a palace and temples, showcasing its military and architectural importance.");
                break;
            }
        }//end of marathwada

        case 4:
        {
            //vidharbha region
            printf("\n-----------------------Vidharbha Region--------------------------");
            printf("\nThe Vidarbha region in Maharashtra, part of the Nagpur Division, is characterized by its agrarian economy, cultural diversity, and significant historical sites. Major districts include Nagpur, Amravati, and Chandrapur, known for attractions such as Nagzira Wildlife Sanctuary, Tadoba-Andhari Tiger Reserve, and ancient temples like Deekshabhoomi in Nagpur.");
            printf("\n");
            printf("\nForts in Vidharbha Region");
            printf("\na.Gavilgad Fort (Amravati)\nb.Narnala Fort (Akola)\nc.Chikhaldara Fort (Amravati)Gadchiroli Fort (Gadchiroli)\nd.Nagardhan Fort (Nagpur)\ne.Ramtek Fort (Nagpur)\nf.Manikgad Fort (Chandrapur)");
            printf("\nEnter your choice in given character to know about above forts:");
            printf("\n");
            scanf("%s",&c);

            switch(c)
            {
                case 'a'://gavilgad
                printf("\nGavilgad Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\n Gavilgad Fort is located near the Chikhaldara hill station in Amravati district. It is known for its strategic location and historical importance, offering panoramic views of the surrounding region.");
                break;
                case 'b'://narnala
                printf("\nNarnala Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\n Narnala Fort, also known as Shahnoor Fort, is situated in the Akola district. It consists of three forts: Zafarabad, Teliagarh, and Narnala itself. The fort has historical significance dating back to the Mughal and Maratha periods, known for its architecture and scenic views.");
                break;
                case 'c'://chilkhaldara
                printf("\nChilkhaldara Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\nChilkadand Fort is an ancient fortification with historical significance. It is located on a hill and is known for its strategic location and robust architecture. The fort has witnessed various rulers and historical events, contributing to its cultural and historical importance. ");
                break;
                case 'd'://gadchiroli
                printf("\nGadchiroli Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\nGadchiroli Fort is an ancient fortification with historical significance dating back to medieval times. It is situated on a hill and served as a strategic stronghold in the region. The fort features sturdy fortifications, bastions, gates, and remnants of structures like palaces and temples, reflecting its military and architectural importance. Gadchiroli Fort has witnessed various rulers and historical events, making it a significant cultural and historical landmark in Maharashtra's Vidarbha region.");
                break;
                case 'e'://nagardhan
                printf("\nNagardhan Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\nNagardhan Fort is believed to date back to ancient times and has seen various rulers, including the Gonds, Marathas, and Bhonsles. It is situated atop a hill and offers panoramic views of the surrounding landscape. The fort features impressive stone walls, bastions, and gates that are characteristic of medieval fortifications.");
                break;
                case 'f'://rantek
                printf("\nRamtek Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\nRamtek Fort is perched atop the Ramtek Hill, providing commanding views of the surrounding landscape. The fort is renowned for its association with Lord Rama, as it is believed to be one of the places visited by Lord Rama during his exile. The fortifications include stone walls, bastions, and gateways that reflect its strategic and defensive importance in historical times.");
                break;
                case 'g'://manikgad
                printf("\nManikgad Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\nManikgad Fort is situated in the Sahyadri mountain range and is known for its strategic location. It is believed to have been built during the Maratha period and served as a watchtower to guard the nearby trade routes. ");
                break;
            }
        }//end of vidharbha
        break;

        case 5:
        {
            //nashik region
            printf("\n-----------------------Nashik Region--------------------------");
            printf("\nThe Nashik region in Maharashtra, part of the Nashik Division, is renowned for its religious and cultural significance, encompassing districts like Nashik, Dhule, and Nandurbar. Key attractions include the holy city of Nashik, famous for its Kumbh Mela, ancient temples like Trimbakeshwar and Vani, and scenic landscapes along the Godavari River.");
            printf("\n");
            printf("\nForts in Nashik Region");
            printf("\na.Anjaneri Fort (Nashik)\nb.Salher Fort (Nashik)\nc.Mulher Fort (Nashik)\nd.Ramshej Fort (Nashik)\ne.Bhaskargad Fort (Nashik)\nf.Hargad Fort (Nashik)\ng.Salota Fort (Nashik)\nh.Aundha Fort (Nashik)\ni.Indrai Fort (Nashik)\nj.Kavnai Fort (Nashik)");
            printf("\nEnter your choice in given character to know about above forts:");
            printf("\n");
            scanf("%s",&c);

            switch(c)
            {
                case 'a'://anjaneri
                printf("\nAnjaneri Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\nAnjaneri Fort is believed to be named after Anjani Mata, the mother of Lord Hanuman, who is said to have been born here. It is situated near the Trimbakeshwar town and is famous for its association with Hindu mythology and epic tales. ");
                break;
                case 'b'://salher
                printf("\nSalher Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\nSalher Fort is the highest fort in Maharashtra and is located near the Maharashtra-Gujarat border. It played a significant role in the historical battles and offers breathtaking views of the Sahyadri mountain range.");
                break;
                case 'c'://mulher
                printf("\nMulher Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\nMulher Fort is situated atop a hill in the Sahyadri mountain range. It has a strategic location that overlooks the trade routes passing through the region. The fort has witnessed various rulers, including the Marathas and Mughals, due to its strategic importance in controlling the surrounding territories.");
                break;
                case 'd'://ramshej
                printf("\nRamshej Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\n Ramshej Fort is located near Nashik and is known for its strategic location and historical importance. It offers panoramic views of the surrounding countryside and is popular among trekkers.");
                break;
                case 'e'://bhaskargad
                printf("\nBhaskar Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\n: Bhaskargad Fort is located atop a hill in the Western Ghats, offering commanding views of the surrounding landscape. It is known for its strategic location, providing a vantage point over the nearby valleys and trade routes. The fort has historical significance, having been built and used by various rulers throughout history.");
                break;
                case 'f'://hargad
                printf("\nHargad Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\nHargad Fort is situated atop a hill in the Sahyadri mountain range, offering panoramic views of the surrounding countryside. It is known for its strategic location and served as a watchtower to guard the nearby trade routes. The fort has witnessed various rulers and historical events, contributing to its cultural and historical importance.");
                break;
                case 'g'://salota
                printf("\nSalota Fort");
                printf("\n\nSalota Fort is located near Nashik and is known for its historical significance and architectural remains. It provides panoramic views of the surrounding region.These forts in the Nashik region of Maharashtra are important cultural and historical landmarks, reflecting the region's rich heritage and strategic significance during different periods of Indian history. Many of these forts have withstood the test of time and remain popular tourist destinations today.");
                break;
                case 'h'://aundha
                printf("\nAundha Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\nAundha Fort is situated in the town of Aundha Nagnath in the Hingoli district of Maharashtra. It is known for its historical significance and architectural remnants. The fort overlooks the town and offers panoramic views of the surrounding countryside. Aundha Fort has played a role in regional history, reflecting its strategic importance.");
                break;
                case 'i'://indrai
                printf("\nIndrai Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\nIndrai Fort is located in the Buldhana district of Maharashtra. It is known for its historical significance and strategic location. The fort has traditional fortifications and offers scenic views of the surrounding area.");
                break;
                case 'j'://kavnai
                printf("\nKavnai Fort");
                printf("\n\nYear of Establishment: Ancient (exact year unknown)\n\nKavnai Fort is situated near Igatpuri in the Nashik district of Maharashtra. It is known for its trekking trails and historical significance. The fort offers panoramic views of the Sahyadri range and has historical structures within its premises.");
                break;
            }
        }//end of nashik
        break;
    }
}