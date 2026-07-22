#pragma once

class CModelState  // sizeof 0x2C0, align 0xFF [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCModel > m_hModel; // offset 0xA0, size 0x8, align 8
    CUtlSymbolLarge m_ModelName; // offset 0xA8, size 0x8, align 8
    char _pad_00B0[0x30]; // offset 0xB0
    IPhysAggregateInstance* m_pVPhysicsAggregate; // offset 0xE0, size 0x8, align 8 | MPhysPtr
    float32 m_flRootBoneOffset_x; // offset 0xE8, size 0x4, align 4
    float32 m_flRootBoneOffset_y; // offset 0xEC, size 0x4, align 4
    float32 m_flRootBoneOffset_z; // offset 0xF0, size 0x4, align 4
    uint8 m_nRootBoneOffsetResetSerialNumber; // offset 0xF4, size 0x1, align 1
    char _pad_00F5[0x1B]; // offset 0xF5
    bool m_bClientClothCreationSuppressed; // offset 0x110, size 0x1, align 1
    char _pad_0111[0xEF]; // offset 0x111
    uint8 m_nAnimStateNoInterpSerialNumber; // offset 0x200, size 0x1, align 1
    char _pad_0201[0x7]; // offset 0x201
    uint64 m_MeshGroupMask; // offset 0x208, size 0x8, align 8
    char _pad_0210[0x58]; // offset 0x210
    C_NetworkUtlVectorBase< int32 > m_nBodyGroupChoices; // offset 0x268, size 0x18, align 8
    char _pad_0280[0x32]; // offset 0x280
    int8 m_nIdealMotionType; // offset 0x2B2, size 0x1, align 1
    int8 m_nForceLOD; // offset 0x2B3, size 0x1, align 1
    int8 m_nClothUpdateFlags; // offset 0x2B4, size 0x1, align 1
    char _pad_02B5[0xB]; // offset 0x2B5
};
