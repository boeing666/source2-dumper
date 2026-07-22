#pragma once

class CDOTAOverworldRoom  // sizeof 0x68, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    OverworldRoomID_t m_unRoomID; // offset 0x0, size 0x2, align 255
    char _pad_0002[0x2]; // offset 0x2
    Vector2D m_vPos; // offset 0x4, size 0x8, align 4 | MPropertyDescription
    Vector2D m_vSize; // offset 0xC, size 0x8, align 4 | MPropertyDescription
    char _pad_0014[0x4]; // offset 0x14
    CPanoramaImageName m_strBackgroundImage; // offset 0x18, size 0x10, align 8 | MPropertyDescription
    CUtlVector< OverworldNodeID_t > m_vecNodes; // offset 0x28, size 0x18, align 8 | MPropertyDescription
    OverworldNodeID_t m_unUnlockedByNodeID; // offset 0x40, size 0x2, align 255 | MPropertyDescription
    char _pad_0042[0x26]; // offset 0x42
};
