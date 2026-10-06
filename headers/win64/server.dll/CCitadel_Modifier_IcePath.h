#pragma once

class CCitadel_Modifier_IcePath : public CCitadelModifier /*0x0*/  // sizeof 0x8F0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x8D8]; // offset 0x0
    int32 m_iShardCount; // offset 0x8D8, size 0x4, align 4
    VectorWS m_vLastShardPosition; // offset 0x8DC, size 0xC, align 4
    CHandle< CBaseModelEntity > m_hSurfShard; // offset 0x8E8, size 0x4, align 4
    CHandle< CBaseModelEntity > m_hLastSpawnedShard; // offset 0x8EC, size 0x4, align 4
};
