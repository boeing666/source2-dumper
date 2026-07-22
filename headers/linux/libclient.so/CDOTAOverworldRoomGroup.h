#pragma once

class CDOTAOverworldRoomGroup  // sizeof 0x50, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    OverworldRoomGroupID_t m_unGroupID; // offset 0x0, size 0x1, align 255
    char _pad_0001[0x7]; // offset 0x1
    CUtlString m_strLocName; // offset 0x8, size 0x8, align 8
    CUtlString m_strEntityParentName; // offset 0x10, size 0x8, align 8 | MPropertyDescription
    Vector2D m_vPosition; // offset 0x18, size 0x8, align 4 | MPropertyDescription
    Vector2D m_vSize; // offset 0x20, size 0x8, align 4 | MPropertyDescription
    CUtlVector< OverworldRoomID_t > m_vecRooms; // offset 0x28, size 0x18, align 8
    float32 m_flTrainCarViewDistance; // offset 0x40, size 0x4, align 4
    Vector2D m_flTrainCarViewOffset; // offset 0x44, size 0x8, align 4
    char _pad_004C[0x4]; // offset 0x4C
};
