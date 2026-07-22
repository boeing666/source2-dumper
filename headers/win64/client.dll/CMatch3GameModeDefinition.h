#pragma once

class CMatch3GameModeDefinition  // sizeof 0x70, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    Match3GameModeID_t m_unGameModeID; // offset 0x0, size 0x4, align 255
    char _pad_0004[0xC]; // offset 0x4
    CUtlString m_sLocName; // offset 0x10, size 0x8, align 8
    CUtlString m_sOpponentScene; // offset 0x18, size 0x8, align 8
    CPanoramaImageName m_sBackgroundImage; // offset 0x20, size 0x10, align 8
    int32 m_nBoardRows; // offset 0x30, size 0x4, align 4
    int32 m_nBoardCols; // offset 0x34, size 0x4, align 4
    float32 m_flPlayerHealth; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
    CUtlVector< CUtlString > m_vecHeroes; // offset 0x40, size 0x18, align 8
    CUtlVector< CMatch3Level* > m_vecLevels; // offset 0x58, size 0x18, align 8
};
