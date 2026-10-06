#pragma once

class CCitadel_Modifier_IcePath : public CCitadelModifier /*0x0*/  // sizeof 0x8E0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x8C8]; // offset 0x0
    int32 m_iShardCount; // offset 0x8C8, size 0x4, align 4
    VectorWS m_vLastShardPosition; // offset 0x8CC, size 0xC, align 4
    CHandle< C_BaseModelEntity > m_hSurfShard; // offset 0x8D8, size 0x4, align 4
    CHandle< C_BaseModelEntity > m_hLastSpawnedShard; // offset 0x8DC, size 0x4, align 4
};
