#include "items.h"
#include "maps.h"

#include <cstdint>

extern "C" {

// Item Rando
uint16_t PossibleItems[] = { StrangeSack, MagicalMapBigger, ShineSprite, DiamondStar, EmeraldStar, GoldStar, RubyStar, SapphireStar, GarnetStar, CrystalStar, StarPiece, GoldBar, GoldBarx3, ThunderBolt, ThunderRage, ShootingStar, IceStorm, FireFlower, EarthQuake, BoosSheet, VoltShroom, RepelCape, RuinPowder, SleepySheep, POWBlock, Stopwatch, DizzyDial, PowerPunch, CourageShell, HPDrainItem, TradeOff, MiniMrMini, MrSoftener, Mushroom, SuperShroom, UltraShroom, LifeShroom, DriedShroom, TastyTonic, HoneySyrup, MapleSyrup, JamminJelly, SlowShroom, GradualSyrup, HotDog, Cake, PointSwap, FrightMask, Mystery, InnCoupon, WhackaBump, Coconut, DriedBouquet, MysticEgg, GoldenLeaf, KeelMango, FreshPasta, CakeMix, HotSauce, TurtleyLeaf, Horsetail, PeachyPeach, SpitePouch, KoopaCurse, ShroomFry, ShroomRoast, ShroomSteak, Mistake, HoneyShroom, MapleShroom, JellyShroom, HoneySuper, MapleSuper, JellySuper, HoneyUltra, MapleUltra, JellyUltra, SpicySoup, ZessDinner, ZessSpecial, ZessDeluxe, ZessDynamite, ZessTea, SpaceFood, IciclePop, ZessFrappe, SnowBunny, CoconutBomb, CourageMeal, ShroomCake, ShroomCrepe, MousseCake, FriedEgg, FruitParfait, EggBomb, InkPasta, Spaghetti, ShroomBroth, PoisonShroom, ChocoCake, MangoDelight, LovePudding, MeteorMeal, TrialStew, CouplesCake, InkySauce, Omelettemeal, KoopaTea, Koopasta, SpicyPasta, HeartfulCake, PeachTart, ElectroPop, FirePop, HoneyCandy, CocoCandy, JellyCandy, ZessCookie, HealthySalad, KoopaBun, FreshJuice, PowerJump, Multibounce, PowerBounce, TornadoJump, ShrinkStomp, SleepyStomp, SoftStomp, PowerSmash, QuakeHammer, HammerThrow, PiercingBlow, HeadRattle, FireDrive, IceSmash, DoubleDip, DoubleDipP, Charge, ChargeP, SuperAppeal, SuperAppealP, PowerPlus, PowerPlusP, PUpDDown, PUpDDownP, AllorNothing, AllorNothingP, MegaRush, MegaRushP, PowerRush, PowerRushP, PDownDUp, PDownDUpP, LastStand, LastStandP, DefendPlus, DefendPlusP, DamageDodge, DamageDodgeP, HPPlus, HPPlusP, FPPlus, FlowerSaver, FlowerSaverP, IcePower, SpikeShield, FeelingFine, FeelingFineP, ZapTap, DoublePain, Jumpman, Hammerman, ReturnPostage, HappyHeart, HappyHeartP, HappyFlower, HPDrainBadge, HPDrainBadgeP, FPDrain, FPDrainP, CloseCall, CloseCallP, PrettyLucky, PrettyLuckyP, LuckyDay, LuckyDayP, Refund, PityFlower, PityFlowerP, QuickChange, Peekaboo, TimingTutor, HeartFinder, FlowerFinder, MoneyMoney, AttackFXR, AttackFXB, AttackFXG, AttackFXY, AttackFXP, ChillOut, FirstAttack, BumpAttack, SlowGo, Simplifier, Unsimplifier, LuckyStart, LEmblem, WEmblem, TripleDip, LuckyStartPLuckyStartIcon, DebugBadge, SuperCharge, SuperChargeP };
uint16_t ItemArraySize = sizeof(PossibleItems) / sizeof(PossibleItems[0]);

// LZ Rando
uint32_t PossibleLZMaps[] = { aji_00, aji_01, aji_02, aji_03, aji_04, aji_05, aji_06, aji_07, aji_08, aji_09, aji_10, aji_11, aji_12, aji_13, aji_14, aji_15, aji_16, aji_17, aji_18, aji_19, bom_00, bom_01, bom_02, bom_03, bom_04, dou_00, dou_01, dou_02, dou_03, dou_04, dou_05, dou_06, dou_07, dou_08, dou_09, dou_10, dou_11, dou_12, dou_13, eki_00, eki_01, eki_02, eki_03, eki_04, eki_05, eki_06, end_00, gon_00, gon_01, gon_02, gon_03, gon_04, gon_05, gon_06, gon_07, gon_08, gon_09, gon_10, gon_11, gon_12, gon_13, gor_00, gor_01, gor_02, gor_03, gor_04, gra_00, gra_01, gra_02, gra_03, gra_04, gra_05, gra_06, hei_00, hei_01, hei_02, hei_03, hei_04, hei_05, hei_06, hei_07, hei_08, hei_09, hei_10, hei_11, hei_12, hei_13, hom_00, jin_00, jin_01, jin_02, jin_03, jin_04, jin_05, jin_06, jin_07, jin_08, jin_09, jin_10, jin_11, jon_00, las_00, las_01, las_02, las_03, las_04, las_05, las_06, las_07, las_08, las_09, las_10, las_11, las_12, las_13, las_14, las_15, las_16, las_17, las_18, las_19, las_20, las_21, las_22, las_23, las_24, las_25, las_26, las_27, las_28, las_29, las_30, moo_00, moo_01, moo_02, moo_05, moo_06, moo_07, mri_00, mri_01, mri_02, mri_03, mri_04, mri_05, mri_06, mri_07, mri_08, mri_09, mri_10, mri_11, mri_12, mri_13, mri_14, mri_15, mri_16, mri_17, mri_18, mri_19, mri_20, muj_00, muj_01, muj_02, muj_03, muj_04, muj_05, muj_10, muj_11, muj_12, nok_00, nok_01, pik_00, pik_01, pik_02, pik_03, pik_04, rsh_00_a, rsh_00_b, rsh_00_c, rsh_01_a, rsh_01_b, rsh_01_c, rsh_02_a, rsh_02_b, rsh_02_c, rsh_03_a, rsh_03_b, rsh_03_c, rsh_04_a, rsh_04_b, rsh_04_c, rsh_05_a, rsh_06_a, rsh_07_a, rsh_07_b, rsh_07_c, rsh_08_a, tik_00, tik_01, tik_02, tik_03, tik_04, tik_05, tik_06, tik_07, tik_08, tik_11, tik_12, tik_13, tik_15, tik_16, tik_17, tik_18, tik_19, tik_20, tik_21, tou_01, tou_02, tou_03, tou_04, tou_05, tou_06, tou_07, tou_08, tou_10, tou_12, usu_00, usu_01, win_00, win_01, win_02, win_03, win_04, win_05, win_06 };
uint16_t LZMapArraySize = sizeof(PossibleLZMaps) / sizeof(PossibleLZMaps[0]);

// LZ Challenge Mode
uint32_t PossibleChallengeMaps[] = { aji_01, aji_02, aji_03, aji_05, aji_07, aji_11, aji_12, aji_13, aji_14, aji_18, bom_00, bom_01, bom_02, bom_03, bom_04, dou_00, dou_02, dou_03, dou_04, dou_05, dou_06, dou_07, dou_09, dou_10, dou_11, dou_13, eki_00, eki_02, eki_03, eki_04, eki_05, eki_06, gon_01, gon_02, gon_03, gon_04, gon_05, gon_06, gon_07, gon_08, gon_09, gon_11, gon_12, gon_13, gor_00, gor_01, gor_02, gor_03, gor_04, gra_00, gra_01, gra_02, gra_03, gra_04, gra_05, gra_06, hei_00, hei_01, hei_02, hei_04, hei_06, hei_08, hei_09, hei_10, hei_12, hei_13, hom_00, jin_00, jin_03, jin_04, jin_05, jin_06, jin_07, jin_08, jin_09, jin_10, jin_11, jon_00, las_01, las_02, las_03, las_04, las_06, las_07, las_09, las_10, las_11, las_12, las_13, las_14, las_15, las_16, las_17, las_18, las_19, las_20, las_21, las_22, las_23, las_24, las_25, las_26, las_29, las_30, moo_00, moo_01, moo_02, moo_05, moo_06, moo_07, mri_00, mri_01, mri_02, mri_03, mri_04, mri_05, mri_06, mri_07, mri_09, mri_10, mri_12, mri_13, mri_15, mri_16, mri_17, mri_18, mri_19, mri_20, muj_00, muj_01, muj_02, muj_03, muj_04, muj_05, muj_12, nok_00, nok_01, pik_00, pik_01, pik_03, pik_04, rsh_00_c, rsh_02_c, rsh_03_c, rsh_04_c, rsh_05_a, rsh_06_a, tik_00, tik_01, tik_02, tik_03, tik_04, tik_05, tik_06, tik_07, tik_11, tik_12, tik_13, tik_15, tik_16, tik_17, tik_18, tik_19, tik_20, tik_21, tou_01, tou_02, tou_03, tou_04, tou_05, tou_06, tou_07, tou_08, tou_12, usu_00, usu_01, win_00, win_01, win_02, win_03, win_05 };
uint16_t ChallengeMapArraySize = sizeof(PossibleChallengeMaps) / sizeof(PossibleChallengeMaps[0]);

}