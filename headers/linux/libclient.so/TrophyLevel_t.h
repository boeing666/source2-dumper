#pragma once

struct TrophyLevel_t  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    uint32 m_nScore; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    int32 m_nBadgePoints; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    CPanoramaImageName m_sImage; // offset 0x8, size 0x10, align 8 | MPropertyDescription
};
