#pragma once

class CAbilityCardTossVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1728, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonedCard; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ClubCardTrail; // offset 0x1240, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DiamondCardTrail; // offset 0x1320, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HeartCardTrail; // offset 0x1400, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpadeCardTrail; // offset 0x14E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JokerCardTrail; // offset 0x15C0, size 0xE0, align 8
    CSoundEventName m_strCardSummonSound; // offset 0x16A0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strCardCastSound; // offset 0x16B0, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_ClubModifier; // offset 0x16C0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_DiamondModifier; // offset 0x16D0, size 0x10, align 8
    float32 m_flSummonedCardStartSideOffset; // offset 0x16E0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSummonedCardSideOffsetStep; // offset 0x16E4, size 0x4, align 4
    float32 m_flSummonedCardForwardOffset; // offset 0x16E8, size 0x4, align 4
    float32 m_flSummonedCardVerticalOffset; // offset 0x16EC, size 0x4, align 4
    float32 m_flSpadeWeight; // offset 0x16F0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flClubWeight; // offset 0x16F4, size 0x4, align 4
    float32 m_flHeartWeight; // offset 0x16F8, size 0x4, align 4
    float32 m_flDiamondWeight; // offset 0x16FC, size 0x4, align 4
    float32 m_flJokerWeight; // offset 0x1700, size 0x4, align 4
    float32 m_flImprovedJokerWeight; // offset 0x1704, size 0x4, align 4
    Vector m_vDefaultCardColor; // offset 0x1708, size 0xC, align 4
    Vector m_vNextCardColor; // offset 0x1714, size 0xC, align 4
    CGlobalSymbol m_strNewCardActionName; // offset 0x1720, size 0x8, align 8 | MPropertyStartGroup
};
