#pragma once

class CModelState  // sizeof 0x250, align 0xFF [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCModel > m_hModel; // offset 0xA0, size 0x8, align 8 | MNetworkEnable MNetworkChangeCallback
    CUtlSymbolLarge m_ModelName; // offset 0xA8, size 0x8, align 8
    char _pad_00B0[0x30]; // offset 0xB0
    IPhysAggregateInstance* m_pVPhysicsAggregate; // offset 0xE0, size 0x8, align 8 | MPhysPtr
    Vector m_vRootBoneOffset; // offset 0xE8, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    uint8 m_nRootBoneOffsetResetSerialNumber; // offset 0xF4, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bClientClothCreationSuppressed; // offset 0xF5, size 0x1, align 1 | MNetworkEnable
    char _pad_00F6[0xAA]; // offset 0xF6
    uint64 m_MeshGroupMask; // offset 0x1A0, size 0x8, align 8 | MNetworkEnable MNetworkChangeCallback
    char _pad_01A8[0x48]; // offset 0x1A8
    CNetworkUtlVectorBase< int32 > m_nBodyGroupChoices; // offset 0x1F0, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback
    char _pad_0208[0x32]; // offset 0x208
    int8 m_nIdealMotionType; // offset 0x23A, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    int8 m_nForceLOD; // offset 0x23B, size 0x1, align 1
    int8 m_nClothUpdateFlags; // offset 0x23C, size 0x1, align 1
    char _pad_023D[0x13]; // offset 0x23D
};
