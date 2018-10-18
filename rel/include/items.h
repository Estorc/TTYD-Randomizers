#pragma once

#include <cstdio>

// Enumerations
enum ITEMS : uint16_t
{
  StrangeSack = 1,
  PaperModeCurse = 2,
  TubeModeCurse = 3,
  PlaneModeCurse = 4,
  BoatModeCurse = 5,
  Boots = 6,
  SuperBoots = 7,
  UltraBoots = 8,
  Hammer = 9,
  SuperHammer = 10,
  UltraHammer = 11,
  CastleKey1 = 12,
  CastleKey2 = 13,
  CastleKey3 = 14,
  CastleKey4 = 15,
  RedKey = 16,
  BlueKey = 17,
  StorageKey1 = 18,
  StorageKey2 = 19,
  GrottoKey = 20,
  ShopKey = 21,
  SteepleKey1 = 22,
  SteepleKey2 = 23,
  StationKey1 = 24,
  StationKey2 = 25,
  CardKey = 26,
  ElevatorKey1 = 27,
  ElevatorKey2 = 28,
  CardKey1 = 29,
  CardKey2 = 30,
  CardKey3 = 31,
  CardKey4 = 32,
  BlackKey1 = 33,
  BlackKey2 = 34,
  BlackKey3 = 35,
  BlackKey4 = 36,
  StarKey = 37,
  PalaceKey1 = 38,
  PalaceKey2 = 39,
  PalaceKey3 = 40,
  PalaceKey4 = 41,
  PalaceKey5 = 42,
  PalaceKey6 = 43,
  PalaceKey7 = 44,
  PalaceKey8 = 45,
  PalaceKey9 = 46,
  PalaceKey10 = 47,
  PalaceKey11 = 48,
  HouseKey = 49,
  MagicalMap = 50,
  ContactLens = 51,
  BlimpTicket = 52,
  TrainTicket = 53,
  MailboxSP = 54,
  SuperLuigi = 55,
  SuperLuigi2 = 56,
  SuperLuigi3 = 57,
  SuperLuigi4 = 58,
  SuperLuigi5 = 59,
  Cookbook = 60,
  MoonStone = 61,
  SunStone = 62,
  Necklace = 63,
  PuniOrb = 64,
  ChampsBelt = 65,
  PoisonedCake = 66,
  Superbombomb = 67,
  TheLetterp = 68,
  OldLetter = 69,
  ChuckolaCola = 70,
  SkullGem = 71,
  GateHandle = 72,
  WeddingRing = 73,
  GalleyPot = 74,
  GoldRing = 75,
  ShellEarrings = 76,
  Autograph = 77,
  RaggedDiary = 78,
  Blanket = 79,
  VitalPaper = 80,
  Briefcase = 81,
  GoldbobGuide = 82,
  InvalidItemRedPaper = 83,
  InvalidItemBluePaper = 84,
  Cog = 85,
  DataDisk = 86,
  ShineSprite = 87,
  UltraStone = 88,
  BowsersUpgradeMeat = 89,
  InvalidItemPosterOfMario = 90,
  SpecialCard = 91,
  PlatinumCard = 92,
  GoldCard = 93,
  SilverCard = 94,
  Box = 95,
  MagicalMapBigger = 96,
  DubiousPaper = 97,
  RoutingSlip = 98,
  WrestlingMag = 99,
  Present = 100,
  BluePotion = 101,
  RedPotion = 102,
  OrangePotion = 103,
  GreenPotion = 104,
  fn0owStarKey = 105,
  LotteryPick = 106,
  BattleTrunks = 107,
  UpArrow = 108,
  Package = 109,
  AttackFXBImportantItem = 110,
  InvalidItemZapTapIcon1 = 111,
  InvalidItemZapTapIcon2 = 112,
  InvalidItemZapTapIcon3 = 113,
  DiamondStar = 114,
  EmeraldStar = 115,
  GoldStar = 116,
  RubyStar = 117,
  SapphireStar = 118,
  GarnetStar = 119,
  CrystalStar = 120,
  Coin = 121,
  Pianta = 122,
  HeartfromBattlesDropped = 123,
  FlowerfromBattlesDropped = 124,
  StarPiece = 125,
  GoldBar = 126,
  GoldBarx3 = 127,
  ThunderBolt = 128,
  ThunderRage = 129,
  ShootingStar = 130,
  IceStorm = 131,
  FireFlower = 132,
  EarthQuake = 133,
  BoosSheet = 134,
  VoltShroom = 135,
  RepelCape = 136,
  RuinPowder = 137,
  SleepySheep = 138,
  POWBlock = 139,
  Stopwatch = 140,
  DizzyDial = 141,
  PowerPunch = 142,
  CourageShell = 143,
  HPDrainItem = 144,
  TradeOff = 145,
  MiniMrMini = 146,
  MrSoftener = 147,
  Mushroom = 148,
  SuperShroom = 149,
  UltraShroom = 150,
  LifeShroom = 151,
  DriedShroom = 152,
  TastyTonic = 153,
  HoneySyrup = 154,
  MapleSyrup = 155,
  JamminJelly = 156,
  SlowShroom = 157,
  GradualSyrup = 158,
  HotDog = 159,
  Cake = 160,
  PointSwap = 161,
  FrightMask = 162,
  Mystery = 163,
  InnCoupon = 164,
  WhackaBump = 165,
  Coconut = 166,
  DriedBouquet = 167,
  MysticEgg = 168,
  GoldenLeaf = 169,
  KeelMango = 170,
  FreshPasta = 171,
  CakeMix = 172,
  HotSauce = 173,
  TurtleyLeaf = 174,
  Horsetail = 175,
  PeachyPeach = 176,
  SpitePouch = 177,
  KoopaCurse = 178,
  ShroomFry = 179,
  ShroomRoast = 180,
  ShroomSteak = 181,
  Mistake = 182,
  HoneyShroom = 183,
  MapleShroom = 184,
  JellyShroom = 185,
  HoneySuper = 186,
  MapleSuper = 187,
  JellySuper = 188,
  HoneyUltra = 189,
  MapleUltra = 190,
  JellyUltra = 191,
  SpicySoup = 192,
  ZessDinner = 193,
  ZessSpecial = 194,
  ZessDeluxe = 195,
  ZessDynamite = 196,
  ZessTea = 197,
  SpaceFood = 198,
  IciclePop = 199,
  ZessFrappe = 200,
  SnowBunny = 201,
  CoconutBomb = 202,
  CourageMeal = 203,
  ShroomCake = 204,
  ShroomCrepe = 205,
  MousseCake = 206,
  FriedEgg = 207,
  FruitParfait = 208,
  EggBomb = 209,
  InkPasta = 210,
  Spaghetti = 211,
  ShroomBroth = 212,
  PoisonShroom = 213,
  ChocoCake = 214,
  MangoDelight = 215,
  LovePudding = 216,
  MeteorMeal = 217,
  TrialStew = 218,
  CouplesCake = 219,
  InkySauce = 220,
  Omelettemeal = 221,
  KoopaTea = 222,
  Koopasta = 223,
  SpicyPasta = 224,
  HeartfulCake = 225,
  PeachTart = 226,
  ElectroPop = 227,
  FirePop = 228,
  HoneyCandy = 229,
  CocoCandy = 230,
  JellyCandy = 231,
  ZessCookie = 232,
  HealthySalad = 233,
  KoopaBun = 234,
  FreshJuice = 235,
  CrowdCan = 236,
  CrowdRock = 237,
  CrowdBone = 238,
  CrowdHammer = 239,
  PowerJump = 240,
  Multibounce = 241,
  PowerBounce = 242,
  TornadoJump = 243,
  ShrinkStomp = 244,
  SleepyStomp = 245,
  SoftStomp = 246,
  PowerSmash = 247,
  QuakeHammer = 248,
  HammerThrow = 249,
  PiercingBlow = 250,
  HeadRattle = 251,
  FireDrive = 252,
  IceSmash = 253,
  DoubleDip = 254,
  DoubleDipP = 255,
  Charge = 256,
  ChargeP = 257,
  SuperAppeal = 258,
  SuperAppealP = 259,
  PowerPlus = 260,
  PowerPlusP = 261,
  PUpDDown = 262,
  PUpDDownP = 263,
  AllorNothing = 264,
  AllorNothingP = 265,
  MegaRush = 266,
  MegaRushP = 267,
  PowerRush = 268,
  PowerRushP = 269,
  PDownDUp = 270,
  PDownDUpP = 271,
  LastStand = 272,
  LastStandP = 273,
  DefendPlus = 274,
  DefendPlusP = 275,
  DamageDodge = 276,
  DamageDodgeP = 277,
  HPPlus = 278,
  HPPlusP = 279,
  FPPlus = 280,
  FlowerSaver = 281,
  FlowerSaverP = 282,
  IcePower = 283,
  SpikeShield = 284,
  FeelingFine = 285,
  FeelingFineP = 286,
  ZapTap = 287,
  DoublePain = 288,
  Jumpman = 289,
  Hammerman = 290,
  ReturnPostage = 291,
  HappyHeart = 292,
  HappyHeartP = 293,
  HappyFlower = 294,
  HPDrainBadge = 295,
  HPDrainBadgeP = 296,
  FPDrain = 297,
  FPDrainP = 298,
  CloseCall = 299,
  CloseCallP = 300,
  PrettyLucky = 301,
  PrettyLuckyP = 302,
  LuckyDay = 303,
  LuckyDayP = 304,
  Refund = 305,
  PityFlower = 306,
  PityFlowerP = 307,
  QuickChange = 308,
  Peekaboo = 309,
  TimingTutor = 310,
  HeartFinder = 311,
  FlowerFinder = 312,
  MoneyMoney = 313,
  ItemHog = 314,
  AttackFXR = 315,
  AttackFXB = 316,
  AttackFXG = 317,
  AttackFXY = 318,
  AttackFXP = 319,
  ChillOut = 320,
  FirstAttack = 321,
  BumpAttack = 322,
  SlowGo = 323,
  Simplifier = 324,
  Unsimplifier = 325,
  LuckyStart = 326,
  LEmblem = 327,
  WEmblem = 328,
  TripleDip = 329,
  LuckyStartPLuckyStartIcon = 330,
  DebugBadge = 331,
  UpgradedPowerJump = 332,
  UpgradedPowerSmash = 333,
  UpgradedQuakeHammer = 334,
  InvalidItemBadgeNoKnownEffect = 335,
  InvalidItemBadgePNoKnownEffect = 336,
  SuperCharge = 337,
  SuperChargeP = 338,
};