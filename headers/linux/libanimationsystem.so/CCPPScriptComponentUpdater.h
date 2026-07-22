#pragma once

class CCPPScriptComponentUpdater : public CAnimComponentUpdater /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CUtlVector< CGlobalSymbol > m_scriptsToRun; // offset 0x30, size 0x18, align 8 | MPropertyFriendlyName
    char _pad_0048[0x18]; // offset 0x48
};
