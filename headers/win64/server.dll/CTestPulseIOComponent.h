#pragma once

class CTestPulseIOComponent  // sizeof 0x30, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_ComponentData; // offset 0x8, size 0x8, align 8
    CEntityOutputTemplate< CUtlSymbolLarge > m_OnComponentTestFunc; // offset 0x10, size 0x20, align 8
};
