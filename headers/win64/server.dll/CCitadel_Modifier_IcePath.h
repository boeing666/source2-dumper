#pragma once

class CCitadel_Modifier_IcePath : public CCitadelModifier /*0x0*/  // sizeof 0x8E8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x8D0]; // offset 0x0
    int32 m_iShardCount; // offset 0x8D0, size 0x4, align 4
    VectorWS m_vLastShardPosition; // offset 0x8D4, size 0xC, align 4
    CHandle< CBaseModelEntity > m_hSurfShard; // offset 0x8E0, size 0x4, align 4
    CHandle< CBaseModelEntity > m_hLastSpawnedShard; // offset 0x8E4, size 0x4, align 4
};
