#pragma once

class CNmAimCSNode::CDefinition : public CNmPassthroughNode::CDefinition /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    int16 m_nVerticalAngleNodeIdx; // offset 0x18, size 0x2, align 2
    int16 m_nHorizontalAngleNodeIdx; // offset 0x1A, size 0x2, align 2
    int16 m_nWeaponCategoryNodeIdx; // offset 0x1C, size 0x2, align 2
    int16 m_nWeaponTypeNodeIdx; // offset 0x1E, size 0x2, align 2
    int16 m_nWeaponActionNodeIdx; // offset 0x20, size 0x2, align 2
    int16 m_nWeaponDropNodeIdx; // offset 0x22, size 0x2, align 2
    int16 m_nIsDefusingNodeIdx; // offset 0x24, size 0x2, align 2
    int16 m_nCrouchWeightNodeIdx; // offset 0x26, size 0x2, align 2
    float32 m_flHandIKBlendInTimeSeconds; // offset 0x28, size 0x4, align 4
    float32 m_flActionBlendTimeSeconds; // offset 0x2C, size 0x4, align 4
    float32 m_flPlantingBlendTimeSeconds; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
};
