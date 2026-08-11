#pragma once

class CModelState  // sizeof 0x2A0, align 0xFF [vtable] (server) {MGetKV3ClassDefaults}
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
    bool m_bClientClothCreationSuppressed; // offset 0xF5, size 0x1, align 1
    char _pad_00F6[0xEA]; // offset 0xF6
    uint8 m_nAnimStateNoInterpSerialNumber; // offset 0x1E0, size 0x1, align 1
    char _pad_01E1[0x7]; // offset 0x1E1
    uint64 m_MeshGroupMask; // offset 0x1E8, size 0x8, align 8
    char _pad_01F0[0x58]; // offset 0x1F0
    CNetworkUtlVectorBase< int32 > m_nBodyGroupChoices; // offset 0x248, size 0x18, align 8
    char _pad_0260[0x32]; // offset 0x260
    int8 m_nIdealMotionType; // offset 0x292, size 0x1, align 1
    int8 m_nForceLOD; // offset 0x293, size 0x1, align 1
    int8 m_nClothUpdateFlags; // offset 0x294, size 0x1, align 1
    char _pad_0295[0xB]; // offset 0x295
};
