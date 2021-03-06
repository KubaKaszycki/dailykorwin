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
	"skonfiskować, a w socjalizmie – bardzo wysoko opodatkować.",

	"Homoś to jest rzecz normalna. Byli przez cztery tysiące lat,\n"
	"są sobie – nikomu nie przeszkadzali. Natomiast geje, tfu, to\n"
	"jest banda chamów importowanych z zagranicy. Część z nich; w\n"
	"ogóle nie są homosiami. Oni tylko za pieniądze, że tak powiem,\n"
	"udają homosiów. To są importowani z zagranicy ludzie, którzy\n"
	"za pieniądze z zagranicy udają często; często w ogóle nie są\n"
	"homosiami; dostają pieniądze, na to żeby rozbijać społeczeństwo\n"
	"i imputować dziwaczne wartości.",

	"I nie chodzi o estetykę: w społeczeństwie obowiązuje zasada:\n"
	"„Z kim przestajesz, takim się stajesz”, więc i oglądanie\n"
	"– godnych podziwu skądinąd – wysiłków para-sportowców może\n"
	"przynieść – przejściowe, na szczęście – zaburzenia w motoryce!).\n"
	"Jeśli chcemy, by ludzkość się rozwijała, w telewizji\n"
	"powinniśmy oglądać ludzi zdrowych, pięknych, silnych, uczciwych,\n"
	"mądrych – a nie zboczeńców, morderców, słabeuszy, nieudaczników,\n"
	"kiepskich, idiotów – i inwalidów, niestety.",

	"Ilość homosiów w każdym kraju jest od pół do jednego, czasami\n"
	"w niektórych krajach, do półtora procenta.",

	"Ja jakoś nie miałem edukacji seksualnej, a mam szóstkę dzieci.",

	"Ja jestem Europejczykiem. Jestem dobrym Europejczykiem. I tak\n"
	"samo jak dobry Rosjanin nienawidził Związku Sowieckiego, tak\n"
	"samo jak dobry Niemiec nienawidził Trzeciej Rzeszy, tak samo\n"
	"ja jako dobry Europejczyk nienawidzę Unii Europejskiej, pod\n"
	"której okupacją Niemcy, potężne Niemcy, ze wspaniałą gospodarką,\n"
	"od 20 lat rozwijają się w tempie plus 1% – minus 1%, w tej\n"
	"chwili minus 5%. To jest wynik narzucenia przez Unię Europejską\n"
	"absurdalnych, socjalistycznych przepisów.",

	"Ja jestem liberałem – i uważam, że kobieta, która chce pracować\n"
	"poza domem, powinna mieć takie prawo. Sprzeciwiam się tylko\n"
	"sztucznemu subwencjonowaniu tej pracy, poprzez np. podatek\n"
	"progresywny i subwencje do komunikacji zbiorowej oraz nieustanną\n"
	"propagandę, utrzymującą, że kobieta „powinna pracować” (jakby\n"
	"zajmowanie się domem nie było pracą!)",

	"Ja też bym chętnie dorwał się do MEN i zalecił studiowanie\n"
	"jako historii wyłącznie „Historii ruchów konserwatywnych i\n"
	"liberalnych” – ale właśnie dlatego coś takiego jak MEN nie powinno\n"
	"istnieć!",

	"Jak gdzieś jedzie czołg, a ludzie ostrzeżeni się nie usuwają\n"
	"– to ich prawo. Wolny człowiek w wolnym kraju ma prawo dać się\n"
	"rozjechać. Na tym polega liberalizm.",

	"Jak może istnieć ustrój, w którym dwóch meneli spod budki ma\n"
	"dwa głosy, a profesor uniwersytetu ma jeden głos? Trzeba być\n"
	"idiotą, żeby chcieć w takim ustroju żyć.",

	"Jak widzę tolerancyjnego socjalistę z ludzką twarzą – to mam\n"
	"ochotę wymierzyć solidnego kopa w środek tej twarzy.",

	"… już zaczyna wracać nieznany w spisie Świętych Pańskich\n"
	"św. Spokój. Już widać, że żadnych zasadniczych zmian nie będzie.",

	"Ja, droga p. Kolendo-Zalewsko, publicystko, uważam akurat\n"
	"p. Anetę Krawczykową nie za „kobietę zboczoną”, co brzmi\n"
	"podniecająco, lecz za zwykłą k***ę – ale, oczywiście, nie\n"
	"będę się przy tej ocenie upierał. Ostatecznie p. Lepper\n"
	"zna Ją lepiej…",

	"Ja w odróżnieniu od księdza, wierzę w Boga.",

	"Ja od 40 lat przekonuję ludzi, że 2×2=4, za komuny była\n"
	"teoria, że 2×2=12, w tej chwili jesteśmy przy twierdzeniu,\n"
	"że 2×2=9. Już gdzieś tak ludzie uczynili postęp, ja już\n"
	"mam tego dość. 2×2=4, jest 4, jest 4, jest 4, koniec.\n"
	"Jeśli ktoś np. mówi tak, a to się mówi w tej chwili, np.\n"
	"była minister finansów to powiedziała, że podatki takie\n"
	"lepsze, niskie, to wprowadzimy, jak się nam podniosą\n"
	"wskaźniki gospodarcze, jak to? To jeżeli się podniosą\n"
	"bez planów podatki, to po co planować podatki i wskaźniki\n"
	"wzrostu, to jest po prostu idiotka, kompletna idiotka,\n"
	"która po prostu nie wiem, co robi, ona może być księgową,\n"
	"nie ma pojęcia o gospodarce, ale ona była ministrem\n"
	"wybrana, a ja jestem ekscentryczny.",

	"Jak jednak wielokrotnie pisałem istnieją dwie – i tylko\n"
	"dwie możliwości: albo „sprawiedliwość społeczna” jest\n"
	"tym samym, co „sprawiedliwość” – albo jest czym innym.\n"
	"Jeśli jest tym samym – to po co pisać „sprawiedliwość\n"
	"społeczna”? Po co marnować czas czytelnika i sosny na\n"
	"papier gazetowy? Jeśli natomiast „sprawiedliwość\n"
	"społeczna” jest czymś innym, niż zwykła „sprawiedliwość”\n"
	"– to „co innego, niż sprawiedliwość” nazywa się po polsku\n"
	"„niesprawiedliwość”.",

	"Jak Państwo wiedzą słowa „L*d” (a zwłaszcza „Władza L**u”\n"
	"czyli „d***kracja”) budzą u mnie odruchy wymiotne. W\n"
	"pewnym sensie jednak jest to odruch irracjonalny – taki\n"
	"sam jak przerażenie na widok smoka. A to dlatego, że ani\n"
	"smoki, ani „Władza L**u” nie istnieją. Takich zwierząt\n"
	"nie ma.",

	"Jak przed 159 laty pisał wielki historiograf, Aleksy de\n"
	"Tocqueville, im głupsza ustawa, tym więcej w niej\n"
	"wyjątków. Jest to, istotnie, nieuniknione – bo gdyby\n"
	"od głupiej ustawy nie było wyjątków, to po jej wprowadzeniu\n"
	"życie stałoby się nieznośne. Dzięki istnieniu wyjątków, po\n"
	"jakimś czasie wszystko staje się wyjątkiem – i głupota\n"
	"zostaje szczęśliwie odizolowana",

	"Jak wiadomo naczelnym – i w gruncie rzeczy jedynym – celem\n"
	"Lewicy jest zniszczenie porządku społecznego. Utytłanie\n"
	"wszystkich wartości, wdeptanie w błoto i wyśmianie takich\n"
	"pojęć jak „honor”, „prawda”, zniszczenie wszystkiego, co\n"
	"ludzkość przez parę tysięcy lat zbudowała i pełna\n"
	"urawniłowka, czyli totalne zrównanie wszystkiego i zgnojenie\n"
	"tych, którzy – tacy wrogowie Równości – z tego szamba\n"
	"usiłują wystawić łepek.",
	
	"Jednej tylko rzeczy nie mogę zrozumieć: ludzie z PO potrafią\n"
	"nie uledz naciskom z Brukseli i w tym „kryzysie” prowadzą\n"
	"w Polsce dość rozsądną politykę – a jednocześnie chyba\n"
	"szczerze deklarują, że Polska powinna ratyfikować ten \n"
	"„Traktat Lizboński”… po wprowadzeniu którego większość 26\n"
	"państw po prostu zmusi III Rzeczpospolitą do prowadzenia\n"
	"takiej samej polityki, jak reszta państw Wspólnoty!!!",

	"Jest taki artykuł KK, który mówi, kto przemocą lub\n"
	"podstępem skłania inną osobę do niekorzystnego\n"
	"rozporządzania się własnym, cudzym mieniem podlega karze.\n"
	"Otóż, kto głosował w Sejmie za przymusem ubezpieczeń, ten\n"
	"zmuszał mnie do niekorzystnego rozporządzania własnym\n"
	"mieniem, a więc pójdzie siedzieć.",

	"Jestem przekonany, że 90% z was to homo sovieticus.",

	"Jestem również za legalizacją picia kawy bez cukru\n"
	"(znacznie ohydniejsza w smaku, niż marihuana!) – ale\n"
	"sam takowej nie piję. U mnie punkt widzenia nie zależy\n"
	"od punktu siedzenia.",

	"Jeszcze kiedyś powiesimy ostatniego d***kratę na\n"
	"kiszkach ostatniego socjalisty!",

	"Jeśli w wyniku własnej decyzji ginie człowiek\n"
	"– to jego prywatna sprawa. Jeśli ginie 10.000 ludzi\n"
	"– to jest to 10.000 prywatnych spraw – a nie „problem\n"
	"społeczny”.",

	"Jeśli więc zauważycie Państwo, że w jakiejś wypowiedzi\n"
	"powołam się na „sprawiedliwość społeczną” lub zażądam\n"
	"„wyrównywania szans” – to proszę natychmiast przestać\n"
	"czytać moje blogi, i napisane po tej dacie artykuły\n"
	"– kontentując się tymi, które napisałem, gdy byłem\n"
	"jeszcze przy zdrowych zmysłach!",

	"… jeżeli państwo zagłosują na jakiegoś kandydata z\n"
	"tych partii, które są w Sejmie, to państwo\n"
	"jesteście idioci.",

	"Jeżeli państwo macie odrobinę zdrowego rozsądku,\n"
	"to przede wszystkim głosujcie na wszystkich, (…)\n"
	"tylko nie na tych łajdaków.(…) Jeżeli zagłosujecie\n"
	"na te trzy partie [PiS, PO, centrolewica], to jest\n"
	"tak samo jak za komuny – głosowaliście na PZPR. Skąd\n"
	"PZPR miała się dowiedzieć, że było źle, skoro\n"
	"wszyscy jak barany głosowali. (…). Jeśli państwo\n"
	"jak barany zagłosujecie na przedstawicieli tych\n"
	"trzech partii, to nie dziwcie się, że będzie tak jak\n"
	"jest. (…)"
};

const char *const *const DAILYKORWIN_TEXTS = _DAILYKORWIN_TEXTS;
const size_t DAILYKORWIN_TEXTC = sizeof(_DAILYKORWIN_TEXTS) / sizeof(const char *);
