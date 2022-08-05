pipeline {
    agent { label 'master' }
    environment {
        ImageTag="c:c17"
    }
    stages {
        stage('Compile C') {
            steps {
                echo 'Building..'
            }
        }
        stage('Test Code') {
            steps {
                echo 'Testing..'
            }
        }
        stage('Build Dockerfile') {
            steps {
                script {
                def customImage = docker.build("$ImageTag-${env.BUILD_ID}")
                echo 'Deploying....'
                }
            }
        }
    }
}