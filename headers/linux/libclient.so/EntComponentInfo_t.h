#pragma once

struct EntComponentInfo_t  // sizeof 0x68, align 0xFF [trivial_dtor] (entity2)
{
    char* m_pName; // offset 0x0, size 0x8, align 8
    char* m_pCPPClassname; // offset 0x8, size 0x8, align 8
    char* m_pNetworkDataReferencedDescription; // offset 0x10, size 0x8, align 8
    char* m_pNetworkDataReferencedPtrPropDescription; // offset 0x18, size 0x8, align 8
    int32 m_nRuntimeIndex; // offset 0x20, size 0x4, align 4
    uint32 m_nFlags; // offset 0x24, size 0x4, align 4
    char _pad_0028[0x38]; // offset 0x28
    CEntityComponentHelper* m_pBaseClassComponentHelper; // offset 0x60, size 0x8, align 8
};
