#pragma once

class CCitadel_Modifier_IcePath : public CCitadelModifier /*0x0*/  // sizeof 0x5E8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x5D0]; // offset 0x0
    int32 m_iShardCount; // offset 0x5D0, size 0x4, align 4
    Vector m_vLastShardPosition; // offset 0x5D4, size 0xC, align 4
    CHandle< CBaseModelEntity > m_hSurfShard; // offset 0x5E0, size 0x4, align 4
    char _pad_05E4[0x4]; // offset 0x5E4
};
