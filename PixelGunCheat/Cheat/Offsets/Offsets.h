﻿#pragma once
#include <cstdint>

class Offsets
{
public:
    // Functions
    static inline uint64_t PlayerMoveCUpdate = 0x1ba8cd0; // 24.4.5
    static inline uint64_t WeaponSoundsUpdate = 0x815fd0; // 24.4.5
    static inline uint64_t WeaponSoundsLateUpdate = 0x80ebe0; // 24.4.5
    static inline uint64_t SetNextCriticalHit = 0x80f060; // 24.4.5
    static inline uint64_t MakeInvisibleForSeconds = 0x1b06330; // 24.4.5
    static inline uint64_t InfiniteGemClaim = 0x4bab20; // 24.4.5
    static inline uint64_t RapidFire = 0x1158630; // 24.4.5
    static inline uint64_t TextMeshGetText = 0x4494c40; // 24.4.5
    static inline uint64_t BehaviourGetEnabled = 0x43aaa70; // 24.4.5
    static inline uint64_t OnPreRender = 0x431e890; // 24.4.5
    static inline uint64_t TextMeshGetColor = 0x44009b0; // 24.4.5
    static inline uint64_t WorldToScreenPoint = 0x438a1f0; // 24.4.5
    static inline uint64_t ComponentGetTransform = 0x43aba90; // 24.4.5
    static inline uint64_t TransformGetRotation = 0x43c0a10; // 24.4.5
    static inline uint64_t TransformGetPosition = 0x43c08a0; // 24.4.5
    static inline uint64_t TransformLookAt = 0x43bea10; // 24.4.5
    static inline uint64_t PhysicsRayCast = 0x441e150; // 24.4.5
    static inline uint64_t ObjectGetInstanceID = 0x43b30f0; // 24.4.5
    static inline uint64_t OnSceneUnload = 0x419a570; // 24.4.5
    static inline uint64_t PriceModifier = 0x7a5670; // 24.4.5
    static inline uint64_t PlayerMoveCFixedUpdate = 0x1b05af0; // 24.4.5
    static inline uint64_t RewardMultiplier = 0xc844e0; // 24.4.5
    static inline uint64_t DoubleRewards = 0xc847d0; // 24.4.5
    static inline uint64_t PremiumPass = 0x18c11b0; // 24.4.5
    static inline uint64_t GetItemRecordDict = 0x7c4b40; // 24.4.5
    static inline uint64_t AddWeapon = 0x65a7b0; // 24.4.5
    static inline uint64_t ItemRecordGetShopId = 0x5918b0; // 24.4.5
    static inline uint64_t GetDamageMultiplier = 0x115dda0; // 24.4.5
    static inline uint64_t GetPlayerSpeed = 0x114ad60; // 24.4.5
    static inline uint64_t GetAmmoInClip = 0x113e630; // 24.4.5
    static inline uint64_t GetAmmo = 0x1142260; // 24.4.5
    static inline uint64_t PlayerGetImmortality = 0x1b7b4b0; // 24.4.5
    static inline uint64_t GiveWear = 0x2066b30; // 24.4.5
    static inline uint64_t GiveWeapon = 0x2063f20; // 24.4.5
    static inline uint64_t GivePets = 0x2062fb0; // 24.4.5
    static inline uint64_t GiveGadget = 0x1ee9500; // 24.4.5
    static inline uint64_t AddGems = 0x20587b0; // 24.4.5
    static inline uint64_t AddCoins = 0x20598b0; // 24.4.5
    static inline uint64_t AddSomeCurrency = 0x205aa60; // 24.4.5
    static inline uint64_t AddCoupons = 0x2057cc0; // 24.3.11 (Presumably no longer needed, cannot update currently, no old dump!)
    static inline uint64_t AddClanChestPoints = 0x2058e70; // 24.4.5
    static inline uint64_t ProgressUpdaterGetInstance = 0xa1ed90; // 24.4.5
    static inline uint64_t ProgressAddCurrency = 0xa2d890; // 24.4.5
    static inline uint64_t GetWeaponSkinSettings = 0x905940; // 24.4.5
    static inline uint64_t GetIDListParentInstance = 0x14b94b0; // 24.4.5
    static inline uint64_t GetIDList = 0x14dd500; // 24.4.5
    static inline uint64_t GadgetActivate = 0x1b75b80; // 24.4.5
    static inline uint64_t GadgetDeactivate = 0x1b61740; // 24.4.5
    static inline uint64_t SpoofModuleLevel = 0x1577200; // 24.4.5
    static inline uint64_t ModulePerkDuration = 0x1f109d0; // 24.4.5
    static inline uint64_t ThrowGadgetDamage = 0x1f10920; // 24.4.5
    static inline uint64_t GadgetDuration = 0x1f10d20; // 24.4.5
    static inline uint64_t GadgetCooldown = 0x1f10a20; // 24.4.5
    static inline uint64_t TeamKill = 0x1aee0a0; // 24.4.5
    static inline uint64_t LotteryDropCount = 0xb9d560; // 24.4.5
    static inline uint64_t LotteryDropId = 0xb9d660; // 24.4.5
    static inline uint64_t LotteryDropType = 0xb9d6b0; // 24.4.5
    static inline uint64_t WeaponSetSkin = 0x8ff7c0; // 24.4 (Useless, only for overriding prefab)
    static inline uint64_t ForceItemDisplay = 0x14be880; // 24.4.5
    static inline uint64_t SendChat = 0x1b0f2c0; // 24.4.5
    
    // Fields
    static inline uint64_t scopeSpeed = 0x100;
    static inline uint64_t zoomXray = 0xCE;
    static inline uint64_t bulletBreakout = 0x1ac;
    static inline uint64_t bulletSuperBreakout = 0x1ad;
    static inline uint64_t railgunStopAtWall = 0x1d0;
    static inline uint64_t shootDelay = 0x1B8;
    static inline uint64_t bulletDelay = 0x1B4;
    static inline uint64_t delayInBurstShooting = 0x5E8;
    static inline uint64_t isSectorsAOE = 0x3CC;
    static inline uint64_t flamethrower = 0x354;
    static inline uint64_t railgun = 0x1C4;
    static inline uint64_t bazooka = 0x133;
    static inline uint64_t harpoon = 0x2C0;
    static inline uint64_t sectorsAOEAngleBack = 0x3D4;
    static inline uint64_t sectorsAOEAngleFront = 0x3D0;
    static inline uint64_t sectorsAOEDamageMultiplierBack = 0x3E0;
    static inline uint64_t sectorsAOEDamageMultiplierFront = 0x3D8;
    static inline uint64_t sectorsAOEDamageMultiplierSide = 0x3DC;
    static inline uint64_t sectorsAOERadiusSectorsAoE = 0x3E4;
    static inline uint64_t isCharm = 0x27C;
    static inline uint64_t isCursing = 0x21C;
    static inline uint64_t curseTime = 0x220;
    static inline uint64_t curseDamageMultiplier = 0x224;
    static inline uint64_t isLightning = 0x15D;
    static inline uint64_t isPoisoning = 0x200;
    static inline uint64_t poisonCount = 0x204;
    static inline uint64_t isStun = 0x240;
    static inline uint64_t stunCoeff = 0x244;
    static inline uint64_t stunTime = 0x248;
    static inline uint64_t stunRadius = 0x24C;
    static inline uint64_t isBlindEffect = 0x270;
    static inline uint64_t blindEffect = 0x274;
    static inline uint64_t isBlindEffectTime = 0x278;
    static inline uint64_t isSlowdown = 0x22C;
    static inline uint64_t slowdownCoeff = 0x230;
    static inline uint64_t slowdownTime = 0x234;
    static inline uint64_t isSlowdownStack = 0x238;
    static inline uint64_t firstKillCritical = 0x390;
    static inline uint64_t isInvisibleAfterRespawn = 0x391;
    static inline uint64_t invisibleAfterRespawnTime = 0x394;
    static inline uint64_t isFrostSword = 0x371;
    static inline uint64_t isFrostSwordUseAngle = 0x37C;
    static inline uint64_t frostRadius = 0x378;
    static inline uint64_t frostDamageMultiplier = 0x374;
    static inline uint64_t frostSwordAngle = 0x380;
    static inline uint64_t frostSwordnTime = 0x384;
    static inline uint64_t range = 0x668;
    static inline uint64_t recoilCoeff = 0xC8;
    static inline uint64_t recoilCoeffZoom = 0x12C;
    static inline uint64_t moveScatterCoeff = 0xC0;
    static inline uint64_t moveScatterCoeffZoom = 0x124;
    static inline uint64_t fieldOfViewZomm = 0xE0;
    static inline uint64_t scopeCircleRadius = 0xE8;
    static inline uint64_t scopeMovementSpeed = 0xF0;
    static inline uint64_t buffPointsKillDesigner = 0x3AC;
    static inline uint64_t buffPointsAssistDesigner = 0x3B4;
    static inline uint64_t buffPointsRevengeDesigner = 0x3A4;
    static inline uint64_t buffPointsOther = 0x3B8;
    static inline uint64_t buffBonusPointsForKill = 0x3A8;
    static inline uint64_t buffBonusPointsForAssist = 0x3B0;
    static inline uint64_t buffPointsRevenge = 0x3A0;
    static inline uint64_t isBuffPoints = 0x39C;
    static inline uint64_t chargeTime = 0x1EC;
    static inline uint64_t chargeMax = 0x1E8;
    static inline uint64_t chargeLoop = 0x1E0;
    static inline uint64_t isCharging = 0x1D2;
    static inline uint64_t isHeadshotDamageIncreased = 0x28C;
    static inline uint64_t increasedHeadshotDamageMultiplier = 0x290;
    static inline uint64_t isReducedHeadshotDamage = 0x294;
    static inline uint64_t reducedHeadshotDamageMultiplier = 0x298;
    static inline uint64_t isDoubleJump = 0x487;
    static inline uint64_t playerMoveCPlayerDamageable = 0x650;
    static inline uint64_t nickLabel = 0x3B8;
    static inline uint64_t weaponSoundsPlayerMoveC = 0x510;
    static inline uint64_t myPlayerTransform = 0x3A0;
    static inline uint64_t headCollider = 0x128;
    static inline uint64_t maxKoofZoom = 0x10C;
    static inline uint64_t upKoofFireZoom = 0x110;
    static inline uint64_t downKoofFirstZoom = 0x114;
    static inline uint64_t downKoofZoom = 0x118;
    static inline uint64_t maxKoof = 0x94;
    static inline uint64_t tekKoof = 0x98;
    static inline uint64_t upKoofFire = 0x9C;
    static inline uint64_t downKoofFirst = 0xA0;
    static inline uint64_t downKoof = 0xA4;
    static inline uint64_t poisonDamageMultiplier = 0x208;
    static inline uint64_t poisonTime = 0x20C;
    static inline uint64_t ignoreBarrier = 0x130;
    static inline uint64_t ignoreSlyWolf = 0x131;
    static inline uint64_t ignoreReflector = 0x132;
    static inline uint64_t fireImmunity = 0x250;
    static inline uint64_t bleedingImmunity = 0x251;
    static inline uint64_t toxicImmunity = 0x252;
};
