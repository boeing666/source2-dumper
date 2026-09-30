#pragma once

class CAI_Hint : public CServerOnlyEntity /*0x0*/  // sizeof 0x598, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    HintNodeData m_NodeData; // offset 0x4B0, size 0x40, align 8
    CHandle< CBaseEntity > m_hHintOwner; // offset 0x4F0, size 0x4, align 4
    GameTime_t m_flNextUseTime; // offset 0x4F4, size 0x4, align 255
    CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnNPCStartedUsing; // offset 0x4F8, size 0x20, align 8
    CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnNPCStoppedUsing; // offset 0x518, size 0x20, align 8
    float32 m_nodeFOV; // offset 0x538, size 0x4, align 4
    bool m_bNodeFOVCheckBehind; // offset 0x53C, size 0x1, align 1
    char _pad_053D[0x3]; // offset 0x53D
    Vector m_vecForward; // offset 0x540, size 0xC, align 4
    char _pad_054C[0x4]; // offset 0x54C
    CUtlSymbolLarge m_iszAnimgraphEntryAction; // offset 0x550, size 0x8, align 8
    CUtlSymbolLarge m_iszAnimgraphExitAction; // offset 0x558, size 0x8, align 8
    CUtlSymbolLarge m_iszAnimgraphEntryCmd; // offset 0x560, size 0x8, align 8
    CUtlSymbolLarge m_iszAnimgraphExitCmd; // offset 0x568, size 0x8, align 8
    CUtlSymbolLarge m_iszNavlinkTargetName; // offset 0x570, size 0x8, align 8
    bool m_bRemoveOnUnreserved; // offset 0x578, size 0x1, align 1
    char _pad_0579[0x3]; // offset 0x579
    CHandle< CBaseEntity > m_hAssociatedEntity; // offset 0x57C, size 0x4, align 4
    float32 m_flInteractionDistance; // offset 0x580, size 0x4, align 4
    float32 m_flCooldown; // offset 0x584, size 0x4, align 4
    CUtlSymbolLarge m_iszNPCFollowsEntity; // offset 0x588, size 0x8, align 8
    float32 m_flNPCSnapToHintDistance; // offset 0x590, size 0x4, align 4
    char _pad_0594[0x4]; // offset 0x594
};
