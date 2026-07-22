#pragma once

class CAI_Hint : public CServerOnlyEntity /*0x0*/  // sizeof 0x588, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    HintNodeData m_NodeData; // offset 0x4A0, size 0x40, align 255
    CHandle< CBaseEntity > m_hHintOwner; // offset 0x4E0, size 0x4, align 4
    GameTime_t m_flNextUseTime; // offset 0x4E4, size 0x4, align 255
    CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnNPCStartedUsing; // offset 0x4E8, size 0x20, align 8
    CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnNPCStoppedUsing; // offset 0x508, size 0x20, align 8
    float32 m_nodeFOV; // offset 0x528, size 0x4, align 4
    bool m_bNodeFOVCheckBehind; // offset 0x52C, size 0x1, align 1
    char _pad_052D[0x3]; // offset 0x52D
    Vector m_vecForward; // offset 0x530, size 0xC, align 4
    char _pad_053C[0x4]; // offset 0x53C
    CUtlSymbolLarge m_iszAnimgraphEntryAction; // offset 0x540, size 0x8, align 8
    CUtlSymbolLarge m_iszAnimgraphExitAction; // offset 0x548, size 0x8, align 8
    CUtlSymbolLarge m_iszAnimgraphEntryCmd; // offset 0x550, size 0x8, align 8
    CUtlSymbolLarge m_iszAnimgraphExitCmd; // offset 0x558, size 0x8, align 8
    CUtlSymbolLarge m_iszNavlinkTargetName; // offset 0x560, size 0x8, align 8
    bool m_bRemoveOnUnreserved; // offset 0x568, size 0x1, align 1
    char _pad_0569[0x3]; // offset 0x569
    CHandle< CBaseEntity > m_hAssociatedEntity; // offset 0x56C, size 0x4, align 4
    float32 m_flInteractionDistance; // offset 0x570, size 0x4, align 4
    float32 m_flCooldown; // offset 0x574, size 0x4, align 4
    CUtlSymbolLarge m_iszNPCFollowsEntity; // offset 0x578, size 0x8, align 8
    float32 m_flNPCSnapToHintDistance; // offset 0x580, size 0x4, align 4
    char _pad_0584[0x4]; // offset 0x584
};
