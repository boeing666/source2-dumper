#pragma once

class CNPC_BarrackBoss_GraphController : public CAI_CitadelNPC_GraphController /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    CAnimGraph2ParamOptionalRef< bool > b_dying; // offset 0x7F0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_dead; // offset 0x808, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > b_shield_active; // offset 0x820, size 0x18, align 8
};
