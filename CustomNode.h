#pragma once

#include "SubSystems/FEVisualNodeSystem/FEVisualNodeSystem.h"

VISUAL_NODE_CHILD_PRIVATE_PART(CustomNode)
	float Data = 0.0f;

	bool CanConnect(FEVisualNodeSocket* OwnSocket, FEVisualNodeSocket* CandidateSocket, char** MsgToUser);
	void SocketEvent(FEVisualNodeSocket* OwnSocket, FEVisualNodeSocket* ConnectedSocket, FE_VISUAL_NODE_SOCKET_EVENT EventType);

	// Make it private
	void SetStyle(FE_VISUAL_NODE_STYLE NewValue);
public:
	CustomNode();
	CustomNode(const CustomNode& Src);

	void Draw();
	float GetData();

	FEVisualNode* GetNextNode();
};

VISUAL_NODE_CHILD_AFTER_CLASS(CustomNode)