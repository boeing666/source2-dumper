#pragma once

class CAnimUpdateSharedData  // sizeof 0x100, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimUpdateNodeBase > > m_nodes; // offset 0x10, size 0x18, align 8
    CUtlHashtable< CAnimNodePath, int32 > m_nodeIndexMap; // offset 0x28, size 0x20, align 8
    CUtlVector< CSmartPtr< CAnimComponentUpdater > > m_components; // offset 0x48, size 0x18, align 8
    CSmartPtr< CAnimParameterManagerUpdater > m_pParamListUpdater; // offset 0x60, size 0x8, align 8
    CSmartPtr< CAnimTagManagerUpdater > m_pTagManagerUpdater; // offset 0x68, size 0x8, align 8
    CSmartPtr< CAnimScriptManager > m_scriptManager; // offset 0x70, size 0x8, align 8
    CAnimGraphSettingsManager m_settings; // offset 0x78, size 0x30, align 8
    CSmartPtr< CStaticPoseCacheBuilder > m_pStaticPoseCache; // offset 0xA8, size 0x8, align 8
    CSmartPtr< CAnimSkeleton > m_pSkeleton; // offset 0xB0, size 0x8, align 8
    CAnimNodePath m_rootNodePath; // offset 0xB8, size 0x30, align 4
    char _pad_00E8[0x18]; // offset 0xE8
};
