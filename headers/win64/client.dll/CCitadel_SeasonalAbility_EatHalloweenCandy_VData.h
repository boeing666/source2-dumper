#pragma once

class CCitadel_SeasonalAbility_EatHalloweenCandy_VData : public CitadelCosmeticAbilityVData /*0x0*/  // sizeof 0x10D0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    int32 m_nMaxCandy; // offset 0x1080, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    char _pad_1084[0x4]; // offset 0x1084
    CUtlVector< CEmbeddedSubclass< CCitadelModifier > > m_vecCandyModifiers; // offset 0x1088, size 0x18, align 8 | MPropertyDescription
    CUtlOrderedMap< CSubclassName< 0 >, int32 > m_mapBreakableCandyDrops; // offset 0x10A0, size 0x28, align 8 | MPropertyDescription
    float32 m_flCandyDropDistance; // offset 0x10C8, size 0x4, align 4 | MPropertyDescription
    char _pad_10CC[0x4]; // offset 0x10CC
};
