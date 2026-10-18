#pragma once

class CBaseToolInfo  // sizeof 0x20, align 0x8 (toolutils2) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_Name; // offset 0x0, size 0x8, align 8
    CUtlString m_OverrideToolShortcutName; // offset 0x8, size 0x8, align 8
    CUtlString m_FriendlyName; // offset 0x10, size 0x8, align 8
    CUtlString m_ToolIcon; // offset 0x18, size 0x8, align 8
};
