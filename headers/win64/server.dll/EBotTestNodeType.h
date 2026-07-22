#pragma once

enum EBotTestNodeType : uint32_t  // sizeof 0x4
{
    EBotTestNode_NotSet = 0,
    EBotTestNode_StandingMantleStart = 1,
    EBotTestNode_MovingMantleStart = 2,
    EBotTestNode_Dest = 4,
    EBotTestNode_ShootTarget = 8,
    EBotTestNode_TargetDummy = 16,
    EBotTestNode_GunDPSTest = 32,
};
