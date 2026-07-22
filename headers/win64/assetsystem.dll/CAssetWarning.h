#pragma once

class CAssetWarning  // sizeof 0x40, align 0x8 (toolutils2) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CBufferString m_Title; // offset 0x8, size 0x10, align 8
    CBufferString m_Message; // offset 0x18, size 0x10, align 8
    CUtlVector< CAssetWarningCheck > m_Checks; // offset 0x28, size 0x18, align 8
};
