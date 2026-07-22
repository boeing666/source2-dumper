#pragma once

class CNavHullPresetVData  // sizeof 0x18, align 0x8 (navlib) {MVDataRoot MGetKV3ClassDefaults}
{
public:
    CUtlVector< CUtlString > m_vecNavHulls; // offset 0x0, size 0x18, align 8 | MPropertyFriendlyName MPropertyDescription MPropertyAttributeEditor
};
