#pragma once

struct AssetEngineCommand_t  // sizeof 0x38, align 0x8 (toolutils2) {MGetKV3ClassDefaults}
{
    CBufferString m_Command; // offset 0x0, size 0x10, align 8
    CBufferString m_Icon; // offset 0x10, size 0x10, align 8
    CBufferString m_Description; // offset 0x20, size 0x10, align 8
    bool m_bBringEngineToFront; // offset 0x30, size 0x1, align 1
    char _pad_0031[0x7]; // offset 0x31
};
