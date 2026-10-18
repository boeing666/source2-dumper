#pragma once

struct AggregateRTProxySceneObject_t  // sizeof 0x78, align 0x8 (resourcecompiler) {MGetKV3ClassDefaults}
{
    int16 m_nLayer; // offset 0x0, size 0x2, align 2
    char _pad_0002[0x6]; // offset 0x2
    CUtlVector< RTProxyBLAS_t > m_BLASes; // offset 0x8, size 0x18, align 8
    CUtlVector< RTProxyInstanceInfo_t > m_Instances; // offset 0x20, size 0x18, align 8
    CUtlBinaryBlock m_VBData; // offset 0x38, size 0x10, align 8
    CUtlBinaryBlock m_IBData; // offset 0x48, size 0x10, align 8
    CUtlBinaryBlock m_InstanceAlbedoData; // offset 0x58, size 0x10, align 8
    CUtlBinaryBlock m_InstanceEmissiveData; // offset 0x68, size 0x10, align 8
};
