#pragma once

class CAbilityCadenceGrandFinaleVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1170, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_StageModel; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flStageModelHeight; // offset 0x1150, size 0x4, align 4
    float32 m_flStageModelWidth; // offset 0x1154, size 0x4, align 4
    float32 m_flStageModelLength; // offset 0x1158, size 0x4, align 4
    float32 m_flStageModelScale; // offset 0x115C, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_GrandFinaleAOEModifier; // offset 0x1160, size 0x10, align 8 | MPropertyStartGroup
};
