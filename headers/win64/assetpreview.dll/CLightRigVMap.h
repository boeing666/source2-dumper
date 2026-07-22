#pragma once

class CLightRigVMap  // sizeof 0xE8, align 0x8 (toolscene) {MGetKV3ClassDefaults}
{
public:
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeVMapResourceData_t > > m_MapName; // offset 0x0, size 0xE0, align 8
    bool m_bRender3DSkybox; // offset 0xE0, size 0x1, align 1
    bool m_bParticlesTraceAgainstMap; // offset 0xE1, size 0x1, align 1
    char _pad_00E2[0x6]; // offset 0xE2
};
