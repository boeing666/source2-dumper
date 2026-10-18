#pragma once

class CAssetTypeConfig  // sizeof 0x48, align 0x8 (toolutils2) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CSimpleAssetTypeInfo* > m_AssetTypes; // offset 0x0, size 0x18, align 8
    CUtlVector< CSubassetTypeInfo* > m_SubassetTypes; // offset 0x18, size 0x18, align 8
    CUtlVector< CAssetWarning* > m_AssetWarnings; // offset 0x30, size 0x18, align 8
};
