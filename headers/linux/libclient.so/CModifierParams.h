#pragma once

class CModifierParams  // sizeof 0xF0, align 0xFF [trivial_dtor] (client)
{
public:
    CHandle< C_DOTABaseAbility > ability; // offset 0x0, size 0x4, align 4
    float32 fDamage; // offset 0x4, size 0x4, align 4
    float32 fOriginalDamage; // offset 0x8, size 0x4, align 4
    int32 nActivity; // offset 0xC, size 0x4, align 4
    bool bTooltip; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
    int32 nTooltipParam; // offset 0x14, size 0x4, align 4
    bool bIgnoreInvis; // offset 0x18, size 0x1, align 1
    bool bNoCooldown; // offset 0x19, size 0x1, align 1
    bool bIgnoreBaseArmor; // offset 0x1A, size 0x1, align 1
    bool bIgnoreBaseMagicArmor; // offset 0x1B, size 0x1, align 1
    bool bReincarnate; // offset 0x1C, size 0x1, align 1
    bool bDoNotConsume; // offset 0x1D, size 0x1, align 1
    bool bReportMax; // offset 0x1E, size 0x1, align 1
    char _pad_001F[0x1]; // offset 0x1F
    float32 fDistance; // offset 0x20, size 0x4, align 4
    float32 fGain; // offset 0x24, size 0x4, align 4
    float32 fAttackTimeRemaining; // offset 0x28, size 0x4, align 4
    PlayerID_t m_nIssuerPlayerIndex; // offset 0x2C, size 0x4, align 255
    PlayerID_t m_nVictimPlayerID; // offset 0x30, size 0x4, align 255
    int32 nDamageType; // offset 0x34, size 0x4, align 4
    int32 nDamageflags; // offset 0x38, size 0x4, align 4
    int32 nDamageCategory; // offset 0x3C, size 0x4, align 4
    int32 iFailType; // offset 0x40, size 0x4, align 4
    AttackRecord_t iRecord; // offset 0x44, size 0x2, align 255
    char _pad_0046[0x2]; // offset 0x46
    int32 nCost; // offset 0x48, size 0x4, align 4
    int32 nHealthCost; // offset 0x4C, size 0x4, align 4
    int32 nOrdertype; // offset 0x50, size 0x4, align 4
    VectorWS vOldLoc; // offset 0x54, size 0xC, align 4
    VectorWS vNewLoc; // offset 0x60, size 0xC, align 4
    VectorWS vCastLocation; // offset 0x6C, size 0xC, align 4
    bool bCraniumBasherTested; // offset 0x78, size 0x1, align 1
    bool bMKBTested; // offset 0x79, size 0x1, align 1
    bool bSpecialistTested; // offset 0x7A, size 0x1, align 1
    bool bOctarineTested; // offset 0x7B, size 0x1, align 1
    bool bSangeAmpApplied; // offset 0x7C, size 0x1, align 1
    bool bLocketAmpApplied; // offset 0x7D, size 0x1, align 1
    bool bPaladinAmpApplied; // offset 0x7E, size 0x1, align 1
    bool bBlademailApplied; // offset 0x7F, size 0x1, align 1
    bool bForceFieldApplied; // offset 0x80, size 0x1, align 1
    bool bKayaApplied; // offset 0x81, size 0x1, align 1
    bool bYashaAndKayaApplied; // offset 0x82, size 0x1, align 1
    bool bStoutConsidered; // offset 0x83, size 0x1, align 1
    bool bAegisUsed; // offset 0x84, size 0x1, align 1
    bool bRaindropUsed; // offset 0x85, size 0x1, align 1
    bool bBonusIllusion; // offset 0x86, size 0x1, align 1
    bool bInterrupted; // offset 0x87, size 0x1, align 1
    bool bDiffusalApplied; // offset 0x88, size 0x1, align 1
    bool bChainLightningConsidered; // offset 0x89, size 0x1, align 1
    bool bSuppressDamage; // offset 0x8A, size 0x1, align 1
    bool bRangedAttack; // offset 0x8B, size 0x1, align 1
    bool bProcessProcs; // offset 0x8C, size 0x1, align 1
    bool bWrapsTested; // offset 0x8D, size 0x1, align 1
    bool bBloodstoneRegenApplied; // offset 0x8E, size 0x1, align 1
    bool bShroudManaRestoreApplied; // offset 0x8F, size 0x1, align 1
    bool bPhylacteryApplied; // offset 0x90, size 0x1, align 1
    bool bAllowZeroDamageFromPostReductionBlock; // offset 0x91, size 0x1, align 1
    bool bForceMagicStickProc; // offset 0x92, size 0x1, align 1
    bool bIgnoreNegativeValuesIfDebuffImmune; // offset 0x93, size 0x1, align 1
    bool bIgnorePositiveValuesIfDebuffImmune; // offset 0x94, size 0x1, align 1
    bool bIgnoreAllIfDebuffImmune; // offset 0x95, size 0x1, align 1
    bool bAlsoIgnoreBuffsIfDebuffImmune; // offset 0x96, size 0x1, align 1
    bool bIgnoreLowerIfDebuffImmune; // offset 0x97, size 0x1, align 1
    float32 flIgnoreLowerIfDebuffImmune; // offset 0x98, size 0x4, align 4
    bool bIgnoreHigherIfDebuffImmune; // offset 0x9C, size 0x1, align 1
    char _pad_009D[0x3]; // offset 0x9D
    float32 flIgnoreHigherIfDebuffImmune; // offset 0xA0, size 0x4, align 4
    bool bIgnoreTemporaryAttackSpeedModifiers; // offset 0xA4, size 0x1, align 1
    char _pad_00A5[0x3]; // offset 0xA5
    char* pszAbilitySpecialName; // offset 0xA8, size 0x8, align 8
    int32 nAbilitySpecialLevel; // offset 0xB0, size 0x4, align 4
    bool bAllowCopy; // offset 0xB4, size 0x1, align 1
    char _pad_00B5[0xB]; // offset 0xB5
    CHandle< C_BaseEntity > hattacker; // offset 0xC0, size 0x4, align 4
    CHandle< C_BaseEntity > htarget; // offset 0xC4, size 0x4, align 4
    CHandle< C_BaseEntity > hunit; // offset 0xC8, size 0x4, align 4
    CHandle< C_DOTABaseAbility > inflictor; // offset 0xCC, size 0x4, align 4
    CHandle< C_DOTABaseAbility > inflictor2; // offset 0xD0, size 0x4, align 4
    char _pad_00D4[0x4]; // offset 0xD4
    CDOTA_Buff* pAddedBuff; // offset 0xD8, size 0x8, align 8
    Vector vAttemptedKnockbackDirection; // offset 0xE0, size 0xC, align 4
    float32 flAttemptedKnockbackMagnitude; // offset 0xEC, size 0x4, align 4
};
