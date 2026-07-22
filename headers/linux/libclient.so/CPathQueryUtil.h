#pragma once

class CPathQueryUtil  // sizeof 0x80, align 0xFF (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CTransform m_PathToEntityTransform; // offset 0x10, size 0x20, align 16
    CUtlVector< Vector > m_vecPathSamplePositions; // offset 0x30, size 0x18, align 8
    CUtlVector< float32 > m_vecPathSampleParameters; // offset 0x48, size 0x18, align 8
    CUtlVector< float32 > m_vecPathSampleDistances; // offset 0x60, size 0x18, align 8
    bool m_bIsClosedLoop; // offset 0x78, size 0x1, align 1
    char _pad_0079[0x7]; // offset 0x79
};
