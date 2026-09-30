#pragma once

class CAbilityCardTossVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A48, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonedCard; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ClubCardTrail; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DiamondCardTrail; // offset 0x1640, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HeartCardTrail; // offset 0x1720, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpadeCardTrail; // offset 0x1800, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JokerCardTrail; // offset 0x18E0, size 0xE0, align 8
    CSoundEventName m_strCardSummonSound; // offset 0x19C0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strCardCastSound; // offset 0x19D0, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_ClubModifier; // offset 0x19E0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_DiamondModifier; // offset 0x19F0, size 0x10, align 8
    float32 m_flSummonedCardStartSideOffset; // offset 0x1A00, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSummonedCardSideOffsetStep; // offset 0x1A04, size 0x4, align 4
    float32 m_flSummonedCardForwardOffset; // offset 0x1A08, size 0x4, align 4
    float32 m_flSummonedCardVerticalOffset; // offset 0x1A0C, size 0x4, align 4
    float32 m_flSpadeWeight; // offset 0x1A10, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flClubWeight; // offset 0x1A14, size 0x4, align 4
    float32 m_flHeartWeight; // offset 0x1A18, size 0x4, align 4
    float32 m_flDiamondWeight; // offset 0x1A1C, size 0x4, align 4
    float32 m_flJokerWeight; // offset 0x1A20, size 0x4, align 4
    float32 m_flImprovedJokerWeight; // offset 0x1A24, size 0x4, align 4
    Vector m_vDefaultCardColor; // offset 0x1A28, size 0xC, align 4
    Vector m_vNextCardColor; // offset 0x1A34, size 0xC, align 4
    CGlobalSymbol m_strNewCardActionName; // offset 0x1A40, size 0x8, align 8 | MPropertyStartGroup
};
