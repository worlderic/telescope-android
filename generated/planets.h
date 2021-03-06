const AstronomicalObject planets[] PROGMEM = {
{    7.841835,   16.355407,'M', 'o', 'o', 'n',   0,   0,   0,   0,   0,   0, },//         Moon    n 
{   11.006661,    7.830113,'J', 'u', 'p', 'i', 't', 'e', 'r',   0,   0,   0, },//      Jupiter    n 
{   16.909410,  -20.759556,'S', 'a', 't', 'u', 'r', 'n',   0,   0,   0,   0, },//       Saturn    n 
{   16.217615,  -21.773873,'M', 'a', 'r', 's',   0,   0,   0,   0,   0,   0, },//         Mars    n 
};
const AstronomicalObjectTime planetsTime[] PROGMEM = {
//Moon
    {7.128078146686878, 17.12465497077915},
    {7.173678799285527, 17.036607070472783},
    {7.221455415332403, 16.95442871300567},
    {7.270900067575274, 16.880086393638546},
    {7.321407035096044, 16.814944042106582},
    {7.372308311502874, 16.759710596248496},
    {7.4229109754444655, 16.714418862612714},
    {7.472535164360523, 16.678431485646946},
    {7.520551614088582, 16.65047370467071},
    {7.566417662007236, 16.628693079861737},
    {7.609710272930142, 16.61074951489185},
    {7.65015439669137, 16.59393555949663},
    {7.687644490424564, 16.57532847046078},
    {7.722256870696681, 16.551969829971863},
    {7.754250689289201, 16.52106407571982},
    {7.784055922763772, 16.48018154686267},
    {7.8122478679140075, 16.4274469448577},
    {7.839509167649955, 16.361691978828183},
    {7.866582065531953, 16.282552695271793},
    {7.8942150471367984, 16.19049793786113},
    {7.923108933072956, 16.086784542041055},
    {7.953867579259973, 15.973345224409226},
    {7.986957590646946, 15.8526242271641},
    {8.022680086380504, 15.727381463089948},
    {8.06115589071737, 15.600487299657535},
    {8.102323930800248, 15.474727598728368},
    {8.14595141608063, 15.352633397252276},
    {8.191653660451124, 15.236343396860917},
    {8.238921195290638, 15.127502618564323},
    {8.287151905535216, 15.027194595559155},
    {8.335686393985423, 14.935905601888294},
    {8.383845021594322, 14.853516009568295},
    {8.430965452008614, 14.77931655753951},
    {8.476439616111595, 14.712048367356674},
    {8.519748940976678, 14.64996653754945},
    {8.560496365261882, 14.590929879010478},
    {8.598433425277525, 14.532515776749687},
    {8.633480224931686, 14.472160705650786},
    {8.665736037616222, 14.40732148829431},
    {8.695478459170081, 14.335648643744316},
    {8.723149687725869, 14.255158464728215},
    {8.74932966773013, 14.164386947886992},
    {8.774697348805667, 14.062507690823232},
    {8.799982916703343, 13.949398313698843},
    {8.82591522075176, 13.825645820067571},
    {8.853169387800715, 13.692489589547598},
    {8.882319576650369, 13.551709532397409},
    {8.91380101792763, 13.40547410607814},
    {8.94788409629671, 13.256166901861798},
    {8.984661602621937, 13.106210822985593},
    {9.0240487915551, 12.95790588637186},
    {9.065794759168307, 12.813291788659027},
    {9.109503006172705, 12.674040969227946},
    {9.154658913668733, 12.541383992700354},
    {9.200661948291147, 12.416063845360942},
    {9.246860864964308, 12.29831772301898},
    {9.292590414054734, 12.187881469932108},
    {9.337208392020765, 12.08401466521706},
    {9.380131910863053, 11.985545144273162},
    {9.42087169507318, 11.890932320048293},
    {9.459062864088724, 11.798351086214108},
    {9.494490433343337, 11.705794318128772},
    {9.52710735848139, 11.611193599621618},
    {9.557042941629684, 11.512552871387513},
    {9.584599668234514, 11.408086919954508},
    {9.610237293716978, 11.296353186326526},
    {9.634544211192615, 11.176363216720437},
    {9.658197620634974, 11.047660288574313},
    {9.681915578747729, 10.910352582028858},
    {9.706405233125164, 10.76509669270386},
    {9.732312145067947, 10.613033196520185},
    {9.760175438079386, 10.455682657236538},
    {9.790392600433533, 10.294815420244163},
    {9.823196353185903, 10.132310752329872},
    {9.858644431183052, 9.97002006006007},
    {9.896621721156265, 9.809645839632433},
    {9.936853172191533, 9.65264371885592},
    {9.978925390485543, 9.500151287314731},
    {10.022314636039207, 9.35294213482214},
    {10.066419253911722, 9.211404445517148},
    {10.110594773324905, 9.075539679156885},
    {10.154190316505375, 8.944978755428421},
    {10.196585129164863, 8.819013440709131},
    {10.237224096847452, 8.696641721709927},
    {10.275650997305146, 8.576626067871857},
    {10.31153786135976, 8.457565588392628},
    {10.344708644258517, 8.337979157375111},
    {10.375155026956632, 8.21639849921833},
    {10.403042241643979, 8.091466062292378},
    {10.428703181125575, 7.962030869017338},
    {10.452619890731244, 7.8272335479844575},
    {10.475392791332615, 7.686571103898682},
    {10.497699494722543, 7.539933017709238},
    {10.520246530399868, 7.387603241682596},
    {10.54371837586346, 7.230227138420755},
    {10.568728616567727, 7.068747316109646},
    {10.595777724409329, 6.904316573428753},
    {10.625220923242685, 6.738198809164981},
    {10.657248184358869, 6.571669157512008},
    {10.691876878979901, 6.405923090927135},
    {10.728956303666786, 6.24200146266831},
    {10.76818240273899, 6.080735044746986},
    {10.809120605536163, 5.922709896508709},
    {10.851234550684438, 5.768250756023199},
    {10.89391884473529, 5.61742176532968},
    {10.936534175482425, 5.470040313769717},
    {10.978443467103281, 5.325702002132948},
    {11.019047913691356, 5.183814654234573},
    {11.057821721329761, 5.043640042104469},
    {11.094344231164792, 4.904341737960314},
    {11.128327728781002, 4.765039256398565},
    {11.159639092227156, 4.624864856124488},
    {11.188313087463351, 4.483021814966918},
    {11.214555316171325, 4.33883976201567},
    {11.23873327987702, 4.191822425352359},
    {11.261354959421947, 4.041682726896374},
    {11.283035634655905, 3.8883606723126705},
    {11.304455162395898, 3.732021083979449},
    {11.326309281239974, 3.573030801918947},
    {11.349259446612622, 3.4119177510417975},
    {11.373885919893663, 3.249316919656837},
    {11.400648326234315, 3.085909974186041},
    {11.42985677837801, 2.92236558998087},
    {11.461655212607896, 2.7592867111496284},
    {11.496017115803726, 2.59716924279717},
    {11.532752633375422, 2.43637441059852},
    {11.571525309396753, 2.2771156747205827},
    {11.611876273185445, 2.1194577955949314},
    {11.65325387758588, 1.9633276725510227},
    {11.695046884531004, 1.8085333757359037},
    {11.736619683404902, 1.6547895711810445},
    {11.777348266350572, 1.5017471985864073},
    {11.816655807652072, 1.349025597041181},
    {11.854046623900603, 1.1962455447793818},
    {11.889137127963261, 1.043060998477276},
    {11.921681994738107, 0.8891889851560024},
    {11.951593631262504, 0.7344337091910327},
    {11.978952778136835, 0.5787040205110326},
    {12.004008359887404, 0.42202145757824877},
    {12.027165269856942, 0.26451736864084},
    {12.048959833638111, 0.10641849074446354},
    {12.070024067644026, -0.051978203879765233},
    {12.091041315158787, -0.21033895232839975},
    {12.112697106085777, -0.3683311688699338},
    {12.135629824858901, -0.5256613688429359},
    {12.160385795673509, -0.6821084347076549},
    {12.187382714604102, -0.8375484623852661},
    {12.216884134320608, -0.9919688065135398},
    {12.248986232300927, -1.14547049080666},
    {12.283616702114912, -1.298259722725882},
    {12.320544563215275, -1.450629718268961},
    {12.359398932740417, -1.6029361747820958},
    {12.399694740618267, -1.755567230905483},
    {12.440863311765867, -1.9089111547996613},
    {12.482286084051427, -2.0633231883158425},
    {12.52333001344607, -2.219093307033204},
    {12.563383442183058, -2.3764165427232737},
    {12.601891262561052, -2.5353675995003733},
    {12.638388116811225, -2.6958817124686876},
    {12.672528165253414, -2.8577445377583275},
    {12.704109539862602, -3.0205920675148095},
    {12.733091540108834, -3.1839244099452406},
    {12.75960241205587, -3.3471331967012024},
    {12.783935950564716, -3.509542852025938},
    {12.806535871365153, -3.6704633544067775},
    {12.827968052531943, -3.829250104776771},
    {12.848882163568264, -3.985364687069236},
    {12.869965651107982, -4.13842946321538},
    {12.891894178654127, -4.288269241747162},
    {12.915283176995505, -4.434934890740206},
    {12.940644980765352, -4.578706313733193},
    {12.968355178294368, -4.720075127424299},
    {12.998630472369294, -4.859709858310289},
    {13.031518884536315, -4.998408194761511},
    {13.06690181096081, -5.137041537845469},
    {13.104506501972462, -5.276496102017365},
    {13.143926916805267, -5.417615756468384},
    {13.184650954342281, -5.561147741934766},
    {13.226092034389504, -5.7076942393330015},
    {13.267623403357156, -5.857670553499457},
    {13.308613792623182, -6.011271085313346},
    {13.348463230554684, -6.168444422429415},
    {13.386637842283058, -6.328879456576525},
    {13.422702319284067, -6.492004914695335},
    {13.456348492958249, -6.657005506663478},
    {13.48741805062962, -6.822855881801924},
    {13.515917404724107, -6.988375506845141},
    {13.542022573706198, -7.152302345955957},
    {13.566072471773634, -7.313382370514443},
    {13.588549821708998, -7.470468080429997},
    {13.61005015524151, -7.622616500927781},
    {13.631240841352964, -7.769175644985156},
    {13.652813478916721, -7.909848803048792},
    {13.675433989498327, -8.044728435064604},
    {13.699695113374597, -8.174295601352222},
    {13.726075634215356, -8.299385686975878},
    {13.754909633254762, -8.421125521066223},
    {13.786367677826552, -8.540850034584096},
    {13.820450380721708, -8.660007838312113},
    {13.856993549677199, -8.780063933981163},
    {13.895683206437813, -8.902407667811605},
    {13.93607851881923, -9.028269150203474},
    {13.977640483450138, -9.158647820617542},
    {14.019764513315655, -9.294253901229933},
    {14.06181535869431, -9.435463312713752},
    {14.103163049273785, -9.58228661631232},
    {14.143218699117728, -9.73435324066885},
    {14.181468987522358, -9.890913146021013},
    {14.21750792002792, -10.050858679490084},
    {14.251064225740498, -10.212770115144497},
    {14.282022338001552, -10.374985799777424},
    {14.310434919792158, -10.535698657133743},
    {14.336524842540053, -10.693074526101482},
    {14.360675174339338, -10.845385621494275},
    {14.383406666492412, -10.99114766512966},
    {14.405343591608153, -11.129246486891688},
    {14.427170276243968, -11.259039147792935},
    {14.449582018765213, -11.380416738998004},
    {14.4732349423775, -11.49382074847819},
    {14.498699508688956, -11.600211329295426},
    {14.52642183443789, -11.700992341024225},
    {14.556695795162263, -11.797903297517738},
    {14.58964743183867, -11.892891186041986},
    {14.625231715342478, -11.987975392702285},
    {14.663240610742065, -12.085116457276701},
    {14.703320539717527, -12.186098014070003},
    {14.744997221812628, -12.29242504630263},
    {14.787705757249345, -12.405241668067672},
    {14.830824180261155, -12.525268329790933},
    {14.873708977653498, -12.652758303100716},
    {14.9157313316537, -12.78747368245963},
    {14.956312947083864, -12.92868217452506},
    {14.994960233564942, -13.075177058635882},
    {15.031295389078892, -13.225323406596472},
    {15.06508264754486, -13.377134018943549},
    {15.096247540577973, -13.528375252444773},
    {15.124887114873738, -13.676702762099257},
    {15.151269063684206, -13.819819799241262},
    {15.175818492171212, -13.955647458866535},
    {15.199092104870406, -14.082491197165691},
//Jupiter
    {11.006449431987972, 7.833813934702714},
    {11.00672389019459, 7.828458399352644},
    {11.007186860706605, 7.821928733672891},
    {11.0078375713152, 7.81423020006398},
    {11.00867529386795, 7.805367758995032},
    {11.009699313642818, 7.7953463314690365},
    {11.010908902043935, 7.784170995457652},
    {11.012303295388499, 7.7718471230278885},
    {11.01388167791035, 7.758380481512039},
    {11.0156431670123, 7.7437773142866355},
//Saturn
    {16.912655400975314, -20.76497404493107},
    {16.90809601613553, -20.757499198324087},
    {16.903478976950268, -20.74995953052908},
    {16.898806719507125, -20.74235648874893},
    {16.894081804932657, -20.734692102090737},
    {16.88930686859124, -20.726969056114935},
    {16.884484579573435, -20.719190662239413},
    {16.87961761011355, -20.711360788847916},
    {16.874708610630897, -20.703483777162546},
    {16.869760187424035, -20.69556434200132},
//Mars
    {16.23226887289836, -21.77636082505988},
    {16.21147644514148, -21.775049167506015},
    {16.19006404121244, -21.771954481747763},
    {16.16807082099318, -21.767077536108008},
    {16.14553768067481, -21.760425444692604},
    {16.122507168197163, -21.752012154245048},
    {16.099023389219397, -21.741858831843825},
    {16.07513189706989, -21.729994174008112},
    {16.05087956404944, -21.716454632970258},
    {16.026314437970083, -21.701284552172556},
};
const short planetMeta[] = {240, 1, 0, 10, 24, 240, 10, 24, 250, 10, 24, 260, };
const float planetStartJulian = 2457519.4166666665;
const long planetStartSeconds = 1462917600;
