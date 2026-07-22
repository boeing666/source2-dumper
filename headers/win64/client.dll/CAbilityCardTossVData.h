#pragma once

class CAbilityCardTossVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1EC0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonedCard; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ClubCardTrail; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DiamondCardTrail; // offset 0x1AB8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HeartCardTrail; // offset 0x1B98, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpadeCardTrail; // offset 0x1C78, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JokerCardTrail; // offset 0x1D58, size 0xE0, align 8
    CSoundEventName m_strCardSummonSound; // offset 0x1E38, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strCardCastSound; // offset 0x1E48, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_ClubModifier; // offset 0x1E58, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_DiamondModifier; // offset 0x1E68, size 0x10, align 8
    float32 m_flSummonedCardStartSideOffset; // offset 0x1E78, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSummonedCardSideOffsetStep; // offset 0x1E7C, size 0x4, align 4
    float32 m_flSummonedCardForwardOffset; // offset 0x1E80, size 0x4, align 4
    float32 m_flSummonedCardVerticalOffset; // offset 0x1E84, size 0x4, align 4
    float32 m_flSpadeWeight; // offset 0x1E88, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flClubWeight; // offset 0x1E8C, size 0x4, align 4
    float32 m_flHeartWeight; // offset 0x1E90, size 0x4, align 4
    float32 m_flDiamondWeight; // offset 0x1E94, size 0x4, align 4
    float32 m_flJokerWeight; // offset 0x1E98, size 0x4, align 4
    float32 m_flImprovedJokerWeight; // offset 0x1E9C, size 0x4, align 4
    Vector m_vDefaultCardColor; // offset 0x1EA0, size 0xC, align 4
    Vector m_vNextCardColor; // offset 0x1EAC, size 0xC, align 4
    CGlobalSymbol m_strNewCardActionName; // offset 0x1EB8, size 0x8, align 8 | MPropertyStartGroup
};
