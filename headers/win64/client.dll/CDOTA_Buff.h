#pragma once

class CDOTA_Buff : public C_HorizontalMotionController /*0x0*/, public C_VerticalMotionController /*0x10*/  // sizeof 0x1A58, align 0xFF [vtable abstract] (client)
{
public:
    uint8_t m_bIsAura : 1; // offset 0x0
    uint8_t m_bIsAuraActiveOnDeath : 1; // offset 0x0
    uint8_t m_bMarkedForDeletion : 1; // offset 0x0
    uint8_t m_bAuraIsHeal : 1; // offset 0x0
    uint8_t m_bProvidedByAura : 1; // offset 0x0
    uint8_t m_bCurrentlyInAuraRange : 1; // offset 0x0
    char _pad_0001[0x27]; // offset 0x1
    CUtlSymbolLarge m_name; // offset 0x28, size 0x8, align 8
    char _pad_0030[0x8]; // offset 0x30
    CUtlSymbolLarge m_iszModifierAura; // offset 0x38, size 0x8, align 8
    char _pad_0040[0x8]; // offset 0x40
    int32 m_iSerialNumber; // offset 0x48, size 0x4, align 4
    int32 m_iPaddingToMakeSchemaHappy; // offset 0x4C, size 0x4, align 4 | MFieldVerificationName
    int32 m_iIndex; // offset 0x50, size 0x4, align 4
    GameTime_t m_flCreationTime; // offset 0x54, size 0x4, align 255
    int32 m_iCreationFrame; // offset 0x58, size 0x4, align 4
    GameTime_t m_flLastAppliedTime; // offset 0x5C, size 0x4, align 255
    float32 m_flDuration; // offset 0x60, size 0x4, align 4
    GameTime_t m_flDieTime; // offset 0x64, size 0x4, align 255
    CHandle< C_BaseEntity > m_hCaster; // offset 0x68, size 0x4, align 4
    HeroID_t m_nApplierHeroID; // offset 0x6C, size 0x4, align 255
    CHandle< C_BaseEntity > m_hAbility; // offset 0x70, size 0x4, align 4
    CHandle< C_BaseEntity > m_hParent; // offset 0x74, size 0x4, align 4
    CHandle< C_BaseEntity > m_hDuplicationSource; // offset 0x78, size 0x4, align 4
    AbilityID_t m_nApplierAbilityID; // offset 0x7C, size 0x4, align 255
    CHandle< C_BaseEntity > m_hAuraOwner; // offset 0x80, size 0x4, align 4
    int32 m_iStackCount; // offset 0x84, size 0x4, align 4
    int16 m_iAuraSearchTeam; // offset 0x88, size 0x2, align 2
    int16 m_iAuraSearchType; // offset 0x8A, size 0x2, align 2
    int32 m_iAuraSearchFlags; // offset 0x8C, size 0x4, align 4
    float32 m_flAuraRadius; // offset 0x90, size 0x4, align 4
    int32 m_iTeam; // offset 0x94, size 0x4, align 4
    int32 m_iAttributes; // offset 0x98, size 0x4, align 4
    int16 m_iTooltipParity; // offset 0x9C, size 0x2, align 2 | MFieldVerificationName
    char _pad_009E[0x1]; // offset 0x9E
    bool m_bPurgedDestroy; // offset 0x9F, size 0x1, align 1
    GameTime_t m_flPreviousTick; // offset 0xA0, size 0x4, align 255
    float32 m_flThinkInterval; // offset 0xA4, size 0x4, align 4
    float32 m_flThinkTimeAccumulator; // offset 0xA8, size 0x4, align 4
    char _pad_00AC[0x4]; // offset 0xAC
    CUtlVector< CDOTA_BuffParticle > m_iParticles; // offset 0xB0, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hAuraUnits; // offset 0xC8, size 0x18, align 8
    char _pad_00E0[0x1970]; // offset 0xE0
    HSCRIPT m_hScriptScope; // offset 0x1A50, size 0x8, align 8
};
