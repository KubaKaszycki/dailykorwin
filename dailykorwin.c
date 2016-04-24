#include <dailykorwin.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char *const _DAILYKORWIN_TEXTS[] = {
	"A nie było Islandii przypadkiem?",

	"A pokazują nawet panią Bochniarzową, która wygaduje kompletne banały,\n"
	"panią Szyszkowską opowiadającą takie rzeczy, że boki zrywać?!",
	
	"Albert Einstein pracował był w biurze patentowym – i stworzył Teorię\n"
	"Względności. Istnieje silne podejrzenie, że gdyby pracował na sponsorowanej\n"
	"przez państwo uczelni, to by jej nie wynalazł. Musiałby bowiem pisać\n"
	"miesięczne i roczne plany swoich badań. Oraz sprawozdania. I co miał\n"
	"w nich pisać: „Chwilowo nie wynalazłem Teorii Względności, ale tak sobie myślę…”?",

	"Ależ ja jestem za wejściem do strefy wolnego handlu! Tylko że Unia Europejska\n"
	"nie jest taką strefą, a strefą szalejącej biurokracji, która steruje\n"
	"każdym hektolitrem wina i każdą toną wołowiny.",

	"Ani smoki, ani „Władza L**u” nie istnieją. Takich zwierząt nie ma.",

	"Bardzo się cieszyłem, kiedy Chruszczow oświadczył, że Związek Sowiecki\n"
	"w ciągu 25 lat dogoni i przegoni USA. Jest tylko jeden drobiazg. Rozziew\n"
	"między Ameryką a Unią Europejską powiększa się z każdym miesiącem.\n"
	"Chruszczow miał tę przewagę, że dał sobie 25 lat i zdążył umrzeć. Ponadto\n"
	"co roku dowiadywał się z „Prawdy”, że Związek Sowiecki już dogania USA.\n"
	"Umierał szczęśliwy.",

	"Bo nie o to chodzi by zmieniać świnię przy korycie, tylko koryto im zabrać.",

	"Bo przecież każdy socjalizm – z euro-socjalizmem włącznie, to ustrój\n"
	"niewolniczy – a ustrój niewolniczy jest gospodarczo niewydajny. O czym\n"
	"wiemy z doświadczenia. Młodzi ludzie zresztą to wyczuwają: uciekają z\n"
	"Polski na Wyspy Brytyjskie, Brytyjczycy uciekają do USA… A dojrzali\n"
	"politycznie Europejczycy zajmują się problemem liczby głosów jakie będzie\n"
	"miała w Radzie Unii Europejskiej Polska, a ile Niemcy. A co za różnica,\n"
	"czy Europą rządzić będzie socjalistyczny matoł z Niemiec, czy z Polski?\n"
	"Socjalista – to socjalista, niezależnie od tego, czy jest on z CDU czy\n"
	"z PiS-u, z SLD czy z SPD. Do obozu reedukacji – i tyle.",

	"Budynek Komisji Europejskiej byłby idealny na burdel.",

	"By oszczędzić ludzkości kolejnych konwulsji, musimy jasno i stanowczo\n"
	"powiedzieć naszym kobietom, starcom i dzieciom: My tu rządzimy! Żadnych\n"
	"eksperymentów! Żadnego „współdecydowania” w rodzinie! (…) Panowie!\n"
	"Zachowujmy się odważnie, po męsku!",

	"Celem ruchu drogowego nie jest bezpieczeństwo, tylko szybkość.",

	"Chciałbym odebrać prawo wyborcze wielu osobom, nie tylko kobietom.",

	"Co do reformy administracji, to jedyną reformą jest nieustanne mnożenie\n"
	"posad, za które płaci podatnik. Rządy ˝Solidarności˝ to przyrost\n"
	"biurokracji w tempie większym niż za komuny, przed czym zresztą ostrzegaliśmy\n"
	"już w 1980 r. Obecnie w ramach reformy administracji i oszczędności rząd\n"
	"proponuje nam wydanie jeszcze kilkunastu bilionów na utworzenie powiatów\n"
	"i starostw z legionem kolejnych urzędników. Odbywa się to pod hasłem:\n"
	"Władza bliżej obywatela. Obywatel docenia, że będzie miał bliżej do urzędu,\n"
	"ale wie też, że wścibski urząd będzie miał bliżej do niego, i\n"
	"niekoniecznie się z tego cieszy.",

	"Czy ktoś widział kiedyś, żeby koń wręczył kopertę weterynarzowi?",

	"Dawniej się podbijało państwa. Takie Imperium Rzymskie powstało przez\n"
	"podboje. A dzisiaj się po prostu przekupuje polityków i ludność. Takie są\n"
	"dzisiejsze podboje. To jest chyba bardziej kulturalne niż kiedyś, tylko\n"
	"zdajmy sobie sprawę: ten, kto głosował za, bo dostał 200 złotych od\n"
	"hektara, niech zda sobie sprawę, że sprzedał suwerenność swojego państwa.",

	"Demokracja polega na tym, że jeżeli ja z panem i panią będziemy na\n"
	"bezludnej wyspie, to większością głosów ustalimy, że pani ma z nami\n"
	"na zmianę sypiać! To jest właśnie demokracja! A mając większość 2/3\n"
	"wpiszemy to nawet do konstytucji…",

	"Dla wyjaśnienia moim wyborcom: ja też pijam – ale wyłącznie wino, a\n"
	"na deser miody i (czasem) likier; by nie było, że jestem abstynentem\n"
	"– bo wtedy nie miałbym w wyborach żadnych szans…",

	"Dlaczego chłopaki są w szkole, w telewizji – i zapewne dziś już i w\n"
	"domach (bo rodzice byli indoktrynowani i w szkole i w telewizji…)\n"
	"– zamiast szacunku dla kobiet, zamiast normalnego u chłopców odruchu\n"
	"opiekuńczości w stosunku do dziewcząt – uczone zasady „równouprawnienia”?\n"
	"Jak „równouprawnienie” – to i dziewczynce można przywalić fangę w nos…",

	"Do 9 roku życia byłem socjalistą. Podobno każdy za młodu powinien nim\n"
	"być, potem mądrzeje.",

	"Dopiero w dziewiątym roku życia przejrzałem na oczy i przestałem być\n"
	"socjalistą. Przeczytałem w „Trybunie Ludu”, że Tito zdewaluował dinara.\n"
	"W wyniku tego zachodni kapitaliści będą kupowali dziesięć razy taniej\n"
	"towary jugosłowiańskie, a Jugosłowianie będą musieli płacić dziesięciokrotnie\n"
	"więcej za towary zachodnie. Pomyślałem małym łebkiem, że to jest niemożliwe,\n"
	"by jakikolwiek rząd to zrobił swojemu krajowi. Poszedłem do babci\n"
	"reakcjonistki, która mi powiedziała, co sądzi o Tito, o Stalinie i w ogóle\n"
	"o komunistach. Od tego momentu mój światopogląd się odwrócił. Wcześniej\n"
	"miałem w pokoju wielkie portrety Stalina i Mao. Piękny był ten Stalin.",

	"Dopóki ludzie nie zrozumieją, że tzw. „ubezpieczenia” to hazard, na którym\n"
	"zarabia, jak zawsze, dom gry, czyli ubezpieczyciel – zaś „przymusowe\n"
	"ubezpieczenia” to nie „zdobycz świata pracy” tylko ohydny rabunek w biały\n"
	"dzień – przed którym obywatel nie może się obronić – dopóty rządy będą\n"
	"idiotów – wyborców bezkarnie rabowały z pieniędzy.",

	"Droga Rodaczko! „Obowiązek” oznacza, że ktoś będzie Panią do\n"
	"przeprowadzenia tych badań zmuszał! Pod groźbą 30.000 zł grzywny – o ile\n"
	"pamiętam projekt ustawy. Ponieważ, jak widać, niektóre białogłowy tego\n"
	"nie potrafią swym rozumem objąć, modyfikuję postulata moje: o posyłaniu\n"
	"kobiet na mammografię nie powinna decydować ustawa, nie powinna decydować\n"
	"kobieta – lecz Pan Małżonek! : D Chyba lepiej, gdy decydować będzie\n"
	"wybrany sobie przez Panią Mąż – a nie Ustawodawca, który Pani na oczy\n"
	"nie widział?",

	"„Dziennik” na pierwszej stronie informuje, że doradcą WCzc. Andrzeja\n"
	"Leppera jest zawodowy klown (pisany jako „Klaun” na pierwszym miejscu\n"
	"w zdaniu – myślałem, że to jakieś nazwisko…). Nie rozumiem, na czym\n"
	"ma polegać sensacja? Skoro w Sejmie trwa cyrk, to klown jest jak\n"
	"najbardziej na miejscu. Może nawet być bardziej fachowy od\n"
	"klownów – amatorów popisujących się na mównicy sejmowej.",

	"Dzieci chore umysłowo do szkół wprowadza się celowo, aby obniżyć poziom\n"
	"edukacji. Nie może być tak, że my godzimy się na bredzenie idioty.\n"
	"Posyłanie idioty do szkoły to jest katorga dla tego debila.",

	"Ekonomista tłumaczący, że rynek powinien być wolny, podobny jest\n"
	"dealerowi tłumaczącemu, że kokaina zabija.",

	"Eurosocjalizm jest co prawda lepszy od socjalizmu sowieckiego,\n"
	"bo już nie mordują, tylko kradną. Ale nadal jest to system zły.\n"
	"Jeśli mamy wychodzić z naszego zaścianka, to po co wchodzić do\n"
	"Eurozadupia? Lepiej dołączyć się do krajów, gdzie panuje wolność.",

	"Euro-socjalizm to bratni ustrój „realnego socjalizmu”. Z tą\n"
	"różnicą, że real-socjalizm ewoluował od komunizmu do kapitalizmu\n"
	"– a euro-socjalizm – odwrotnie.",

	"Faszyzm – to nie oddziały SA lub „Czarnych Koszul” maszerujące\n"
	"ulicami. Faszyzm – to urzędnicy w zarękawkach, dyrygujący tym,\n"
	"co ma robić kapitalista w „swojej” fabryce, ojciec ze „swoim”\n"
	"dzieckiem – a czasem: ilu Żydów (albo anty-semitów) posłać\n"
	"do Oświęcimia.",

	"Gdy dwa goryle płci męskiej spotkają się na ścieżce, stają\n"
	"wyprostowane, zaczynają walić się w piersi i ryczeć. Każdy ma\n"
	"nadzieję, że posiadacz mniej potężnej klatki piersiowej ustąpi.",

	"Gdy statek ma pełne spiżarnie, pełna jest kasa okrętowa, pogoda\n"
	"piękna i żadnych raf na horyzoncie – statkiem kierować może\n"
	"załoga przez głosowanie, a nawet Kolegium Pasażerek-Blondynek\n"
	"– i nic się nie stanie, a wszyscy mają ubaw. Natomiast gdy\n"
	"zrywa się burza, przed statkiem rafy – kończy się gadanina o\n"
	"d***kracji, pasażerki chowają się za plecy mężczyzn wołając:\n"
	"„Zróbcie coś!!”, a mężczyźni bez szemrania podporządkowują się kapitanowi.",

	"Gdy w organizmie pojawiają się komórki raka, to trzeba je wyciąć\n"
	"i zniszczyć – a nie litować się nad nimi, że są „takie młode”\n"
	"i „takie twórcze”.",

	"Gdyby nawet socjalizm zapewniał więcej dóbr, niż kapitalizm,\n"
	"to i tak byłbym za kapitalizmem, bo zapewnia on więcej\n"
	"wolności. Na szczęście nie mam tego dylematu…",

	"Gdyby Newton sprzątał w domu, nie wymyśliłby prawa powszechnego\n"
	"ciążenia.",

	"Gdyby rząd V Republiki Francuskiej wykupił wszystkie państwowe\n"
	"firmy w Polsce – rząd III Rzeczypospolitej Polskiej wykupił\n"
	"wszystkie państwowe firmy we Francji – to w obydwu krajach\n"
	"dokonałaby się całkowita prywatyzacja! Taka jest oficjalna\n"
	"interpretacja Ministerstwa Skarbu.",

	"Gdyby w '39 co drugi Żyd miał broń, nie byłoby Holokaustu.",

	"Gdyby wybory miałyby coś zmienić, to dawno zostałyby zakazane.",

	"Gdybyśmy płacili tym, których stuknął samochód, a nie płacili\n"
	"tym, których stuknął meteoryt – to byłoby niesprawiedliwe.\n"
	"A to, że meteoryty walą rzadko, a samochody często – nie jest\n"
	"żadnym argumentem, Sprawiedliwość nie zależy od częstości.",

	"Geje to banda chamów importowanych z zagranicy. To ludzie,\n"
	"którzy za pieniądze z zagranicy chcą rozbijać społeczeństwo.\n"
	"Znam wielu „homosiów”, żaden z nich nie mówi, że jest\n"
	"normalny, tylko że jest wyjątkowy. Nie można robić ze swej\n"
	"orientacji skandalu na ulicy. Jak nie ma dwóch płci to nie\n"
	"„płciowości”. Jeśli mamy jedną płeć w związku, to nie może\n"
	"być mowy o małżeństwie.",

	"Generalnie rzecz biorąc, ja jestem w jednej dziedzinie za\n"
	"równouprawnieniem, a mianowicie: żeby w małżeństwie było\n"
	"50% mężczyzn i 50% kobiet.",

	"Generalnie ustroje wyglądają tak:\n"
	"– Maoizm: mam trzy krowy; rząd zabiera wszystkie, zabija\n"
	"i mięso dzieli po równo.\n"
	"– Komunizm: mam trzy krowy; rząd zabiera je do kołchozu,\n"
	"gdzie zdychają.\n"
	"– Narodowy socjalizm: mam trzy krowy; rząd zabiera dwie\n"
	"i zamienia je na armaty.\n"
	"– Faszyzm: mam trzy krowy; rząd ustanawia cenę maksymalną\n"
	"na mleko, a krowy każe zakolczykować, bym ich nielegalnie\n"
	"nie zjadł.\n"
	"– Socjalizm: mam trzy krowy; rząd odbiera mi pod przymusem\n"
	"mleko, które potem mogę kupić w państwowym sklepie na\n"
	"kartki.\n"
	"– Socjaldemokracja: mam trzy krowy; rząd skupuje ode mnie\n"
	"mleko i rozdaje za darmo w szkołach, gdzie dzieci wylewają\n"
	"je do zlewu.\n"
	"– Państwo opiekuńcze: mam trzy krowy; muszę sprzedać jedną,\n"
	"by starczyło na badania weterynaryjne i podatki od dwóch\n"
	"pozostałych.\n"
	"– Eurosocjalizm: mam trzy krowy; rząd każe mi zabić jedną,\n"
	"bo krów jest za dużo – i drugą, bo krowa sąsiada jest chora\n"
	"na pryszczycę.\n"
	"– Kapitalizm: mam trzy krowy; sprzedaję jedną i kupuję byka!",

	"Genetyka zamorduje różnorodność, a więc i mechanizm ewolucji,\n"
	"a w konsekwencji zginie rodzaj ludzki.",

	"Główną siłą napędową socjalizmu i komunizmu jest zawiść. W\n"
	"kraju kapitalistycznym gdy biedak w tico widzi bogacza w\n"
	"jaguarze, to marzy o dniu w którym też sobie kupi jaguara. W\n"
	"kraju komunistycznym myśli, by bogaczowi tego jaguara\n"
	"skonfiskować, a w socjalizmie – bardzo wysoko opodatkować."
};

const char *const *const DAILYKORWIN_TEXTS = _DAILYKORWIN_TEXTS;
const size_t DAILYKORWIN_TEXTC = sizeof(_DAILYKORWIN_TEXTS) / sizeof(const char *);
