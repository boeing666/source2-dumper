#pragma once

class CIcePathShardGenerator  // sizeof 0xE8, align 0xFF (client)
{
public:
    ice_path_shard_model_desc_t m_icePathModelDesc; // offset 0x0, size 0x38, align 255
    CStrongHandle< InfoForResourceTypeCModel > m_hBaseModel; // offset 0x38, size 0x8, align 8
    ice_path_shard_model_desc_t m_icePathSurfModelDesc; // offset 0x40, size 0x38, align 255
    CStrongHandle< InfoForResourceTypeCModel > m_hSurfModel; // offset 0x78, size 0x8, align 8
    float32 m_flRadius; // offset 0x80, size 0x4, align 4
    char _pad_0084[0x4]; // offset 0x84
    CUtlVector< Vector > m_vecPreviousShard; // offset 0x88, size 0x18, align 8
    Vector m_vecPreviousShardOrigin; // offset 0xA0, size 0xC, align 4
    Vector m_vecPreviousPreviousShardOrigin; // offset 0xAC, size 0xC, align 4
    CUtlVector< Vector > m_vecUnitCirclePoints; // offset 0xB8, size 0x18, align 8
    CUtlVector< Vector > m_vPrevFrontEdgeVerts; // offset 0xD0, size 0x18, align 8
};
