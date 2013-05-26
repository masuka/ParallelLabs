#include "StdAfx.h"

namespace ParallelLabs {

	using namespace System;
	using namespace System::Collections;

	public ref class Cluster {

		private:
			ArrayList ^processors;
			int tick;

		public:

			Cluster() {

				this->processors = gcnew ArrayList();
				this->tick = 0;

			}

	};

	public ref class Processor {

		private:
			ArrayList ^commandQueue;
			ArrayList ^messageBuffer;

		public:
			Processor() {

				this->commandQueue = gcnew ArrayList();
				this->messageBuffer = gcnew ArrayList();

			}

			void execute() {
			}

	};

	public ref class Message {
		
	}

	public ref class Command {
	};
}