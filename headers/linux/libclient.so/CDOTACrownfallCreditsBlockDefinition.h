#pragma once

class CDOTACrownfallCreditsBlockDefinition  // sizeof 0xB8, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CDOTACrownfallCreditsCharacterDefinition > m_vecCharacters; // offset 0x0, size 0x18, align 8
    CDOTACrownfallCreditsMapSceneDefinition m_scene; // offset 0x18, size 0x68, align 8
    CUtlString m_strCustomPanoramaClass; // offset 0x80, size 0x8, align 8
    int32 m_nMarginBottom; // offset 0x88, size 0x4, align 4
    int32 m_nMarginTop; // offset 0x8C, size 0x4, align 4
    bool m_bSpecialThanksBlock; // offset 0x90, size 0x1, align 1
    char _pad_0091[0x7]; // offset 0x91
    CUtlString m_strLocText; // offset 0x98, size 0x8, align 8
    bool m_bJustText; // offset 0xA0, size 0x1, align 1
    char _pad_00A1[0x3]; // offset 0xA1
    int32 m_nStopOffset; // offset 0xA4, size 0x4, align 4
    char _pad_00A8[0x10]; // offset 0xA8
};
