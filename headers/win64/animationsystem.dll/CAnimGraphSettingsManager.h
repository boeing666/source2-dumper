#pragma once

class CAnimGraphSettingsManager  // sizeof 0x30, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > > m_settingsGroups; // offset 0x18, size 0x18, align 8
};
