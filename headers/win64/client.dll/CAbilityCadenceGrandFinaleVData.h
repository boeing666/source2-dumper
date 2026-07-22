#pragma once

class CAbilityCadenceGrandFinaleVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1918, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_StageModel; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flStageModelHeight; // offset 0x18F8, size 0x4, align 4
    float32 m_flStageModelWidth; // offset 0x18FC, size 0x4, align 4
    float32 m_flStageModelLength; // offset 0x1900, size 0x4, align 4
    float32 m_flStageModelScale; // offset 0x1904, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_GrandFinaleAOEModifier; // offset 0x1908, size 0x10, align 8 | MPropertyStartGroup
};
