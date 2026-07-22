#pragma once

enum EGCToGCMsg : uint32_t  // sizeof 0x4
{
    k_EGCToGCMsgMasterAck = 150,
    k_EGCToGCMsgMasterAckResponse = 151,
    k_EGCToGCMsgRouted = 152,
    k_EGCToGCMsgRoutedReply = 153,
    k_EMsgUpdateSessionIP = 154,
    k_EMsgRequestSessionIP = 155,
    k_EMsgRequestSessionIPResponse = 156,
    k_EGCToGCMsgMasterStartupComplete = 157,
};
