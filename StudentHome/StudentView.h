#pragma once

/*
 Copyright WU DE QUAN. All rights reserved.

 @Author: EvLast
 @Date: 2024/6/7 0:20:30

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

	  https://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/

#ifndef _STUDENTVIEW_
#define _STUDENTVIEW_

#include "Student.h"
// -------------------- 数据设计 --------------------

// -------------------- service --------------------


// --------------- 学生页面登入注册模块窗口----------------
void LoginView();


//-------------------------------------------------

//--------------学生注册页面-----------------
void StudentSendView();

//---------------------------------------

//放置按钮
void StudentshowButton(int x, int y, int width, int height, std::string str, int textSize, Color fillColor, Color textColor);

void GameSelect();
//学生页面
void StudentmenuView();

// 技术人员展示页面
void ProductionGroupView();

// 设置界面
void StudentSettingView();


void StopView();

// 双缓冲防闪屏技术
void TimeViewFPS(IMAGE& img);

// 计时界面
//设置耦合返回实现自习功能
void TimeView();


// -------------------- view --------------------

#endif // !_STUDENT_